TARGET = SWGIS
TEMPLATE = subdirs

SWGIS-Core.subdir          = ../SWGIS-Core
SWGIS-Gui.subdir           = ../SWGIS-Gui
SWGIS-WMSProvider.subdir   = ../SWGIS-WMSProvider
SWGIS-OGRProvider.subdir   = ../SWGIS-OGRProvider
SWGIS-App.subdir           = ../SWGIS-App
SWGIS-Plugins.subdir       = ../SWGIS-Plugins

SUBDIRS += SWGIS-Core \
           SWGIS-Gui \
           SWGIS-WMSProvider \
           SWGIS-OGRProvider \
           SWGIS-App \
           SWGIS-Plugins
