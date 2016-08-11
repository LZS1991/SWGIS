/***************************************************************************
    qgssimplifymethod.h
    ---------------------
    begin                : December 2013
    copyright            : (C) 2013 by Matthias Kuhn / Alvaro Huarte
    email                :
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSSIMPLIFYMETHOD_H
#define QGSSIMPLIFYMETHOD_H
#include "qgsconfig.h"
class QgsAbstractGeometrySimplifier;

/**
 * This class contains information about how to simplify geometries fetched from a QgsFeatureIterator
 * @note added in 2.2
 */
class SWGISCORE_EXPORT QgsSimplifyMethod
{
  public:
    enum MethodType
    {
      NoSimplification,     //!< No simplification is applied
      OptimizeForRendering, //!< Simplify using the map2pixel data to optimize the rendering of geometries
      PreserveTopology      //!< Simplify using the Douglas-Peucker algorithm ensuring that the result is a valid geometry
    };

    //! construct a default method
    QgsSimplifyMethod();

    //! Sets the simplification type
    void setMethodType( MethodType methodType );
    //! Gets the simplification type
    inline MethodType methodType() const { return mMethodType; }

    //! Sets the tolerance of simplification in map units. Represents the maximum distance in map units between two coordinates which can be considered equal.
    void setTolerance( double tolerance );
    //! Gets the tolerance of simplification in map units . Represents the maximum distance in map units between two coordinates which can be considered equal.
    inline double tolerance() const { return mTolerance; }

    //! Sets the simplification threshold in pixels. Represents the maximum distance in pixels between two coordinates which can be considered equal.
    void setThreshold( float threshold ) { mThreshold = threshold; }
    //! Gets the simplification threshold in pixels. Represents the maximum distance in pixels between two coordinates which can be considered equal.
    inline float threshold() const { return mThreshold; }

    //! Sets whether the simplification executes after fetch the geometries from provider, otherwise it executes, when supported, in provider before fetch the geometries
    void setForceLocalOptimization( bool localOptimization );
    //! Gets whether the simplification executes after fetch the geometries from provider, otherwise it executes, when supported, in provider before fetch the geometries
    inline bool forceLocalOptimization() const { return mForceLocalOptimization; }

    //! Creates a geometry simplifier according to specified method
    static QgsAbstractGeometrySimplifier* createGeometrySimplifier( const QgsSimplifyMethod& simplifyMethod );

  protected:
    //! Simplification method
    MethodType mMethodType;
    //! Tolerance of simplification, it represents the maximum distance between two coordinates which can be considered equal
    double mTolerance;
    /** Simplification threshold */
    float mThreshold;
    //! Simplification executes after fetch the geometries from provider, otherwise it executes, when supported, in provider before fetch the geometries
    bool mForceLocalOptimization;
};

#endif // QGSSIMPLIFYMETHOD_H
