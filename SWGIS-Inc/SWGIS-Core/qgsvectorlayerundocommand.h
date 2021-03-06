/***************************************************************************
    qgsvectorlayerundocommand.h
    ---------------------
    begin                : June 2009
    copyright            : (C) 2009 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSVECTORLAYERUNDOCOMMAND_H
#define QGSVECTORLAYERUNDOCOMMAND_H

#include <QUndoCommand>

#include <QVariant>
#include <QSet>
#include <QList>

#include "qgsfield.h"
#include "qgsfeature.h"

class QgsGeometry;
class QgsGeometryCache;

#include "qgsvectorlayer.h"
#include "qgsvectorlayereditbuffer.h"

/** \ingroup core
 * \class QgsVectorLayerUndoCommand
 * \brief Base class for undo commands within a QgsVectorLayerEditBuffer.
 */

class SWGISCORE_EXPORT QgsVectorLayerUndoCommand : public QUndoCommand
{
  public:

    /** Constructor for QgsVectorLayerUndoCommand
     * @param buffer associated edit buffer
     */
    QgsVectorLayerUndoCommand( QgsVectorLayerEditBuffer *buffer )
        : QUndoCommand()
        , mBuffer( buffer )
    {}
    inline QgsVectorLayer *layer() { return mBuffer->L; }
    inline QgsGeometryCache *cache() { return mBuffer->L->cache(); }

    virtual int id() const override { return -1; }
    virtual bool mergeWith( const QUndoCommand * ) override { return false; }

  protected:
    QgsVectorLayerEditBuffer* mBuffer;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandAddFeature : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandAddFeature( QgsVectorLayerEditBuffer* buffer, QgsFeature& f );

    virtual void undo() override;
    virtual void redo() override;

  private:
    QgsFeature mFeature;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandDeleteFeature : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandDeleteFeature( QgsVectorLayerEditBuffer* buffer, QgsFeatureId fid );

    virtual void undo() override;
    virtual void redo() override;

  private:
    QgsFeatureId mFid;
    QgsFeature mOldAddedFeature;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandChangeGeometry : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandChangeGeometry( QgsVectorLayerEditBuffer* buffer, QgsFeatureId fid, QgsGeometry* newGeom );
    ~QgsVectorLayerUndoCommandChangeGeometry();

    virtual void undo() override;
    virtual void redo() override;
    virtual int id() const override;
    virtual bool mergeWith( const QUndoCommand * ) override;

  private:
    QgsFeatureId mFid;
    QgsGeometry* mOldGeom;
    mutable QgsGeometry* mNewGeom;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandChangeAttribute : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandChangeAttribute( QgsVectorLayerEditBuffer* buffer, QgsFeatureId fid, int fieldIndex, const QVariant &newValue, const QVariant &oldValue );
    virtual void undo() override;
    virtual void redo() override;

  private:
    QgsFeatureId mFid;
    int mFieldIndex;
    QVariant mOldValue;
    QVariant mNewValue;
    bool mFirstChange;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandAddAttribute : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandAddAttribute( QgsVectorLayerEditBuffer* buffer, const QgsField& field );

    virtual void undo() override;
    virtual void redo() override;

  private:
    QgsField mField;
    int mFieldIndex;
};


class SWGISCORE_EXPORT QgsVectorLayerUndoCommandDeleteAttribute : public QgsVectorLayerUndoCommand
{
  public:
    QgsVectorLayerUndoCommandDeleteAttribute( QgsVectorLayerEditBuffer* buffer, int fieldIndex );

    virtual void undo() override;
    virtual void redo() override;

  private:
    int mFieldIndex;
    bool mProviderField;
    int mOriginIndex;
    QgsField mOldField;
    QgsEditorWidgetConfig mOldEditorWidgetConfig;

    QMap<QgsFeatureId, QVariant> mDeletedValues;
    QString mOldName;
};


/** \ingroup core
 * \class QgsVectorLayerUndoCommandRenameAttribute
 * \brief Undo command for renaming an existing attribute of a vector layer.
 * \note added in QGIS 2.16
 */

class SWGISCORE_EXPORT QgsVectorLayerUndoCommandRenameAttribute : public QgsVectorLayerUndoCommand
{
  public:

    /** Constructor for QgsVectorLayerUndoCommandRenameAttribute
     * @param buffer associated edit buffer
     * @param fieldIndex index of field to rename
     * @param newName new name for field
     */
    QgsVectorLayerUndoCommandRenameAttribute( QgsVectorLayerEditBuffer* buffer, int fieldIndex, const QString& newName );

    virtual void undo() override;
    virtual void redo() override;

  private:
    int mFieldIndex;
    QString mOldName;
    QString mNewName;
};


#endif
