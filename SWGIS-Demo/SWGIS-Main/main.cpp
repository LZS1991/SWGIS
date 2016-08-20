#include <QLocale>
#include <QDir>
#include <QSettings>
#include <QTranslator>
#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <QApplication>
#include <QCoreApplication>
#include <QSplashScreen>
#include <QPixmap>
#include <QBitmap>
#include "qgsapplication.h"
#include "qgslogger.h"
#include "qgsconfig.h"
#include "qgseditorwidgetconfig.h"
#include "qgscustomization.h"
#include "swgisapp.h"

static QStringList myFileList;

bool bundleclicked(int argc, char* argv[])
{
    return (argc > 1 && memcmp(argv[1], "-psn_", 5) == 0);
}

int main(int argc, char *argv[])
{
    bool myHideSplash = false;
    bool mySkipVersionCheck = false;
    bool myRestoreDefaultWindowState = false;
    bool myRestorePlugins = true;
    bool myCustomization = true;
    QString configpath;
    QString optionpath;
    QString customizationfile;
    QStringList args;
    if(!bundleclicked(argc, argv))
    {
        // Build a local QCoreApplication from arguments. This way, arguments are correctly parsed from their native locale
        // It will use QString::fromLocal8Bit( argv ) under Unix and GetCommandLine() under Windows.
        QCoreApplication coreApp(argc, argv);
        args = QCoreApplication::arguments();

        for(int i = 1; i < args.size(); ++i)
        {
            const QString &arg = args[i];
            if(arg == "--nocustomization" || arg == "-C")
                myCustomization = false;
            else if(arg == "--nologo" || arg == "-n")
                myHideSplash = true;
            else if(arg == "--noversioncheck" || arg == "-V")
                mySkipVersionCheck = true;
            else if(i + 1 < argc && ( arg == "--optionspath" || arg == "-o" ))
                optionpath = QDir::toNativeSeparators(QDir( args[++i]).absolutePath());
            else if(i + 1 < argc && (arg == "--configpath" || arg == "-c"))
                configpath = QDir::toNativeSeparators(QDir(args[++i]).absolutePath());
            else if( i + 1 < argc && (arg == "--customizationfile" || arg == "-z"))
                customizationfile = QDir::toNativeSeparators(QFileInfo( args[++i] ).absoluteFilePath());
            else if(arg == "--noplugins" || arg == "-P")
                myRestorePlugins = false;
            else if(arg == "--defaultui" || arg == "-d")
                myRestoreDefaultWindowState = true;
            else if(arg == "--")
            {
                for(i++; i < args.size(); ++i)
                    myFileList.append(QDir::toNativeSeparators(QFileInfo(args[i]).absoluteFilePath()));
            }
            else
                myFileList.append(QDir::toNativeSeparators(QFileInfo(args[i]).absoluteFilePath()));
        }

    }
    bool myUseGuiFlag = true;
    if(!myUseGuiFlag)
    {
        std::cerr << QObject::tr("QGIS starting in non-interactive mode not supported.\n"
                                 "You are seeing this message most likely because you "
                                 "have no DISPLAY environment variable set.\n"
                                 ).toUtf8().constData();
        exit(1); //exit for now until a version of qgis is capabable of running non interactive
    }

    if(!optionpath.isEmpty() || !configpath.isEmpty())
    {
        // tell QSettings to use INI format and save the file in custom config path
        QSettings::setDefaultFormat(QSettings::IniFormat);
        QSettings::setPath(QSettings::IniFormat, QSettings::UserScope, optionpath.isEmpty() ? configpath : optionpath);
    }

    if(!myCustomization)
        QgsCustomization::instance()->setEnabled(false);

    QgsApplication myApp(argc, argv, myUseGuiFlag, configpath);

    QCoreApplication::setOrganizationName(QObject::tr("SWGIS"));
    QCoreApplication::setOrganizationDomain(QObject::tr("SWGIS"));
    QCoreApplication::setApplicationName(QObject::tr("SWGIS"));
    QCoreApplication::setAttribute(Qt::AA_DontShowIconsInMenus, false);

    QSettings* customizationsettings;
    if(!optionpath.isEmpty() || !configpath.isEmpty())
    {
        // tell QSettings to use INI format and save the file in custom config path
        QSettings::setDefaultFormat(QSettings::IniFormat);
        QString path = optionpath.isEmpty() ? configpath : optionpath;
        QSettings::setPath(QSettings::IniFormat, QSettings::UserScope, path);
        customizationsettings = new QSettings(QSettings::IniFormat, QSettings::UserScope, "QGIS", "QGISCUSTOMIZATION2");
    }
    else
        customizationsettings = new QSettings("QGIS", "QGISCUSTOMIZATION2");

    // Using the customizationfile option always overrides the option and config path options.
    if(!customizationfile.isEmpty())
    {
        customizationsettings = new QSettings(customizationfile, QSettings::IniFormat);
        QgsCustomization::instance()->setEnabled(true);
    }

    // Load and set possible default customization, must be done afterQgsApplication init and QSettings ( QCoreApplication ) init
    QgsCustomization::instance()->setSettings(customizationsettings);
    QgsCustomization::instance()->loadDefault();

    QSettings mySettings;
    // update any saved setting for older themes to new default 'gis' theme (2013-04-15)
    if(mySettings.contains("/Themes"))
    {
        QString theme = mySettings.value("/Themes", "default").toString();
        if (theme == "gis" || theme == "classic" || theme == "nkids")
        {
            mySettings.setValue("/Themes", QString("default"));
        }
    }

    // custom environment variables
    QMap<QString, QString> systemEnvVars = QgsApplication::systemEnvVars();
    bool useCustomVars = mySettings.value("qgis/customEnvVarsUse", QVariant(false)).toBool();
    if(useCustomVars)
    {
        QStringList customVarsList = mySettings.value("qgis/customEnvVars", "").toStringList();
        if(!customVarsList.isEmpty())
        {
            Q_FOREACH(const QString &varStr, customVarsList)
            {
                int pos = varStr.indexOf(QLatin1Char('|'));
                if(pos == -1)
                    continue;
                QString envVarApply = varStr.left(pos);
                QString varStrNameValue = varStr.mid(pos + 1);
                pos = varStrNameValue.indexOf(QLatin1Char('='));
                if(pos == -1)
                    continue;
                QString envVarName = varStrNameValue.left(pos);
                QString envVarValue = varStrNameValue.mid(pos + 1);

                if(systemEnvVars.contains(envVarName))
                {
                    if(envVarApply == "prepend")
                    {
                        envVarValue += systemEnvVars.value(envVarName);
                    }
                    else if(envVarApply == "append")
                    {
                        envVarValue = systemEnvVars.value(envVarName) + envVarValue;
                    }
                }

                if(systemEnvVars.contains(envVarName) && envVarApply == "unset")
                {
                #ifdef Q_OS_WIN
                    putenv(envVarName.toUtf8().constData());
                #else
                    unsetenv(envVarName.toUtf8().constData());
                #endif
                }
                else
                {
                #ifdef Q_OS_WIN
                    if(envVarApply != "undefined" || !getenv(envVarName.toUtf8().constData()))
                        putenv( QString( "%1=%2" ).arg( envVarName ).arg( envVarValue ).toUtf8().constData() );
                #else
                    setenv(envVarName.toUtf8().constData(), envVarValue.toUtf8().constData(), envVarApply == "undefined" ? 0 : 1);
                #endif
                }
            }
        }
    }

    QString style = mySettings.value("/qgis/style").toString();
    if(!style.isNull())
    {
        QApplication::setStyle(style);
        mySettings.setValue("/qgis/style", QApplication::style()->objectName());
    }

#ifdef Q_OS_WIN
#if QT_VERSION < 0x050000
    else
        QApplication::setStyle( new QPlastiqueStyle );
#endif
#endif

#ifdef Q_OS_WIN
    QCoreApplication::addLibraryPath( QApplication::applicationDirPath() + QDir::separator() + "qtplugins" );
#endif

    //set up splash screen
    QString mySplashPath(QgsCustomization::instance()->splashPath());
    QPixmap myPixmap(mySplashPath + QLatin1String("splash.jpg"));
    QSplashScreen *mypSplash = new QSplashScreen(myPixmap);
    if(mySettings.value("/qgis/hideSplash").toBool() || myHideSplash)
    {
      //splash screen hidden
    }
    else
    {
        //for win and linux we can just automask and png transparency areas will be used
        mypSplash->setMask( myPixmap.mask() );
        mypSplash->show();
    }

    // optionally restore default window state
    // use restoreDefaultWindowState setting only if NOT using command line (then it is set already)
    if(myRestoreDefaultWindowState || mySettings.value("/qgis/restoreDefaultWindowState", false).toBool())
    {
        QgsDebugMsg("Resetting /UI/state settings!");
        mySettings.remove("/UI/state");
        mySettings.remove("/qgis/restoreDefaultWindowState");
    }

    // set max. thread count
    // this should be done in QgsApplication::init() but it doesn't know the settings dir.
    QgsApplication::setMaxThreads(QSettings().value("/qgis/max_threads", -1).toInt());

    SWGISApp *swgis = new SWGISApp(mypSplash, myRestorePlugins, mySkipVersionCheck); // "QgisApp" used to find canonical instance
    swgis->setObjectName("SWGISApp");

    myApp.connect(&myApp,
                  SIGNAL(preNotify(QObject *, QEvent *, bool *)),
                  QgsCustomization::instance(),
                  SLOT(preNotify(QObject *, QEvent *, bool *)));

    /////////////////////////////////////////////////////////////////////
    // autoload any file names that were passed in on the command line
    /////////////////////////////////////////////////////////////////////
    QgsDebugMsg(QString("Number of files in myFileList: %1").arg(myFileList.count()));
    for(QStringList::Iterator myIterator = myFileList.begin(); myIterator != myFileList.end(); ++myIterator)
    {
        QgsDebugMsg(QString("Trying to load file : %1").arg((*myIterator)));
        QString myLayerName = *myIterator;
        // don't load anything with a .qgs extension - these are project files
        if (!myLayerName.contains(".qgs"))
            swgis->openLayer(myLayerName);
    }

    swgis->show();
    myApp.connect(&myApp, SIGNAL(lastWindowClosed()), &myApp, SLOT(quit()));
    mypSplash->finish(swgis);
    delete mypSplash;
    swgis->completeInitialization();

    int retval = myApp.exec();
    delete swgis;
    return  retval;
}
