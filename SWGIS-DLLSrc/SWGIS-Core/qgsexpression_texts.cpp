#include "qgsexpression.h"

QHash<QString, QgsExpression::Help> QgsExpression::gFunctionHelpTexts;

void QgsExpression::initFunctionHelp()
{
  if( !gFunctionHelpTexts.isEmpty() )
    return;

  gFunctionHelpTexts.insert( "$area",
    Help( "$area", tr( "function" ), tr( "Returns the area of the current feature. The area calculated by this function respects both the current project's ellipsoid setting and area unit settings. Eg, if an ellipsoid has been set for the project then the calculated area will be ellipsoidal, and if no ellipsoid is set then the calculated area will be planimetric." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$area" ), tr( "Returns the area of the current feature. The area calculated by this function respects both the current project's ellipsoid setting and area unit settings. Eg, if an ellipsoid has been set for the project then the calculated area will be ellipsoidal, and if no ellipsoid is set then the calculated area will be planimetric." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$area" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$atlasfeature",
    Help( "$atlasfeature", tr( "function" ), tr( "In atlas generation, returns the current feature that is iterated over on the coverage layer. This can be used with the 'attribute' function to return attribute values from the current atlas feature." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$atlasfeature" ), tr( "In atlas generation, returns the current feature that is iterated over on the coverage layer. This can be used with the 'attribute' function to return attribute values from the current atlas feature." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "attribute( $atlasfeature, 'name' )" ), tr( "value stored in 'name' attribute for the current atlas feature" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$atlasfeatureid",
    Help( "$atlasfeatureid", tr( "function" ), tr( "Returns the feature id of the current row while using atlas. This enables you to use features of atlas in rules and for example show or hide features based on their id." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$atlasfeatureid" ), tr( "Returns the feature id of the current row while using atlas. This enables you to use features of atlas in rules and for example show or hide features based on their id." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$atlasfeatureid = $id" ), tr( "true" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$atlasgeometry",
    Help( "$atlasgeometry", tr( "function" ), tr( "Returns the geometry of the current feature iterated in atlas. Can be used for rule based display of geometry when using atlas. For example to only show geometries of other layers when their geometry intersects the iterated geometry of features using atlas." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$atlasgeometry" ), tr( "Returns the geometry of the current feature iterated in atlas. Can be used for rule based display of geometry when using atlas. For example to only show geometries of other layers when their geometry intersects the iterated geometry of features using atlas." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "intersects( $atlasgeometry, $geometry )" ), tr( "true" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$currentfeature",
    Help( "$currentfeature", tr( "function" ), tr( "Returns the current feature being evaluated. This can be used with the 'attribute' function to evaluate attribute values from the current feature." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$currentfeature" ), tr( "Returns the current feature being evaluated. This can be used with the 'attribute' function to evaluate attribute values from the current feature." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "attribute( $currentfeature, 'name' )" ), tr( "value stored in 'name' attribute for the current feature" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$feature",
    Help( "$feature", tr( "function" ), tr( "In atlas generation, returns the current feature number that is iterated over on the coverage layer." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$feature" ), tr( "In atlas generation, returns the current feature number that is iterated over on the coverage layer." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$feature" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$geometry",
    Help( "$geometry", tr( "function" ), tr( "Returns the geometry of the current feature. Can be used for processing with other functions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$geometry" ), tr( "Returns the geometry of the current feature. Can be used for processing with other functions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geomToWKT( $geometry )" ), tr( "POINT(6 50)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$id",
    Help( "$id", tr( "function" ), tr( "Returns the feature id of the current row." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$id" ), tr( "Returns the feature id of the current row." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$id" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$length",
    Help( "$length", tr( "function" ), tr( "Returns the length of a linestring. If you need the length of a border of a polygon, use $perimeter instead. The length calculated by this function respects both the current project's ellipsoid setting and distance unit settings. Eg, if an ellipsoid has been set for the project then the calculated length will be ellipsoidal, and if no ellipsoid is set then the calculated length will be planimetric." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$length" ), tr( "Returns the length of a linestring. If you need the length of a border of a polygon, use $perimeter instead. The length calculated by this function respects both the current project's ellipsoid setting and distance unit settings. Eg, if an ellipsoid has been set for the project then the calculated length will be ellipsoidal, and if no ellipsoid is set then the calculated length will be planimetric." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$length" ), tr( "42.4711" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$map",
    Help( "$map", tr( "function" ), tr( "Returns the id of the current map item if the map is being drawn in a composition, or \"canvas\" if the map is being drawn within the main QGIS window." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$map" ), tr( "Returns the id of the current map item if the map is being drawn in a composition, or \"canvas\" if the map is being drawn within the main QGIS window." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$map" ), tr( "\"overview_map\"" ), tr( "") )
            << HelpExample( tr( "$map" ), tr( "\"canvas\"" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$numfeatures",
    Help( "$numfeatures", tr( "function" ), tr( "In atlas generation, returns the total number of features within the coverage layer." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$numfeatures" ), tr( "In atlas generation, returns the total number of features within the coverage layer." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$numfeatures" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$numpages",
    Help( "$numpages", tr( "function" ), tr( "Returns the total number of pages in the composition." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$numpages" ), tr( "Returns the total number of pages in the composition." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$numpages" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$page",
    Help( "$page", tr( "function" ), tr( "Returns the current page number within a composition." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$page" ), tr( "Returns the current page number within a composition." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$page" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$perimeter",
    Help( "$perimeter", tr( "function" ), tr( "Returns the perimeter length of the current feature. The perimeter calculated by this function respects both the current project's ellipsoid setting and distance unit settings. Eg, if an ellipsoid has been set for the project then the calculated perimeter will be ellipsoidal, and if no ellipsoid is set then the calculated perimeter will be planimetric." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$perimeter" ), tr( "Returns the perimeter length of the current feature. The perimeter calculated by this function respects both the current project's ellipsoid setting and distance unit settings. Eg, if an ellipsoid has been set for the project then the calculated perimeter will be ellipsoidal, and if no ellipsoid is set then the calculated perimeter will be planimetric." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$perimeter" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$rownum",
    Help( "$rownum", tr( "function" ), tr( "Returns the number of the current row." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$rownum" ), tr( "Returns the number of the current row." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$rownum" ), tr( "4711" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$scale",
    Help( "$scale", tr( "function" ), tr( "Returns the current scale of the map canvas.<br><br>Note: This function is only available in some contexts and will be 0 otherwise." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$scale" ), tr( "Returns the current scale of the map canvas.<br><br>Note: This function is only available in some contexts and will be 0 otherwise." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$scale" ), tr( "10000" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$x",
    Help( "$x", tr( "function" ), tr( "Returns the x coordinate of the current feature." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$x" ), tr( "Returns the x coordinate of the current feature." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$x" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$x_at",
    Help( "$x_at", tr( "function" ), tr( "Retrieves a x coordinate of the current feature's geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$x_at" ), tr( "Retrieves a x coordinate of the current feature's geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "i" ), tr( "index of point of a line (indices start at 0; negative values apply from the last index)" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$x_at(1)" ), tr( "5" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$y",
    Help( "$y", tr( "function" ), tr( "Returns the y coordinate of the current feature." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$y" ), tr( "Returns the y coordinate of the current feature." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$y" ), tr( "42" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "$y_at",
    Help( "$y_at", tr( "function" ), tr( "Retrieves a y coordinate of the current feature's geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "$y_at" ), tr( "Retrieves a y coordinate of the current feature's geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "i" ), tr( "index of point of a line (indices start at 0; negative values apply from the last index)" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "$y_at(1)" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "AND",
    Help( "AND", tr( "operator" ), tr( "Returns 1 when condition a and b are true." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "AND" ), tr( "Returns 1 when condition a and b are true." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "condition" ), false, false )
              << HelpArg( tr( "b" ), tr( "condition" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "TRUE AND TRUE" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "TRUE AND FALSE" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 = 2+2 AND 1 = 1" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 = 2+2 AND 1 = 2" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "CASE",
    Help( "CASE", tr( "expression" ), tr( "<pre><br>CASE<br>WHEN <i>condition</i> THEN <i>result</i><br>[ ...n ]<br>[ ELSE <i>result</i> ]<br>END<br></pre>[ ] marks optional components<br><h4>Arguments</h4><br><i>  WHEN condition</i> - The condition expression to evaluate. <br><br><i>  THEN result</i> - If <i>condition</i> evaluates to True then <i>result</i> is evaluated and returned. <br><br><i>  ELSE result</i> - If none of the above conditions evaluated to True then <i>result</i> is evaluated and returned.<br><br><h4>Example</h4><pre>CASE<br>WHEN <i>\"column\" IS NULL</i> THEN <i>'None'</i><br>END</pre>" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "CASE" ), tr( "<pre><br>CASE<br>WHEN <i>condition</i> THEN <i>result</i><br>[ ...n ]<br>[ ELSE <i>result</i> ]<br>END<br></pre>[ ] marks optional components<br><h4>Arguments</h4><br><i>  WHEN condition</i> - The condition expression to evaluate. <br><br><i>  THEN result</i> - If <i>condition</i> evaluates to True then <i>result</i> is evaluated and returned. <br><br><i>  ELSE result</i> - If none of the above conditions evaluated to True then <i>result</i> is evaluated and returned.<br><br><h4>Example</h4><pre>CASE<br>WHEN <i>\"column\" IS NULL</i> THEN <i>'None'</i><br>END</pre>" ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Color",
    Help( "Color", tr( "group" ), tr( "This group contains functions for manipulating colors" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Color" ), tr( "This group contains functions for manipulating colors" ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Conditionals",
    Help( "Conditionals", tr( "group" ), tr( "This group contains functions to handle conditional checks in expressions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Conditionals" ), tr( "This group contains functions to handle conditional checks in expressions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Conditions",
    Help( "Conditions", tr( "group" ), tr( "This group contains functions that operate on condition." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Conditions" ), tr( "This group contains functions that operate on condition." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Conversions",
    Help( "Conversions", tr( "group" ), tr( "This group contains functions to convert on data type to another e.g string to integer, integer to string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Conversions" ), tr( "This group contains functions to convert on data type to another e.g string to integer, integer to string." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Custom",
    Help( "Custom", tr( "group" ), tr( "This group contains custom user-created Python functions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Custom" ), tr( "This group contains custom user-created Python functions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Date and Time",
    Help( "Date and Time", tr( "group" ), tr( "This group contains functions for handling date and time data." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Date and Time" ), tr( "This group contains functions for handling date and time data." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Field",
    Help( "Field", tr( "group" ), tr( "Double click to add field name to expression string.<br>Right-Click on field name to open context menu sample value loading options." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Field" ), tr( "Double click to add field name to expression string.<br>Right-Click on field name to open context menu sample value loading options." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>(),
      tr( "Loading field values from WFS layers isn't supported, before the layer is actually inserted, ie. when building queries." )
       )
      )
    );

  gFunctionHelpTexts.insert( "Fields and Values",
    Help( "Fields and Values", tr( "group" ), tr( "Contains a list of fields from the layer.  Sample values can also be accessed via right-click.<br>Select the field name from the list then right-click to access context menu with options to load sample values from the selected field." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Fields and Values" ), tr( "Contains a list of fields from the layer.  Sample values can also be accessed via right-click.<br>Select the field name from the list then right-click to access context menu with options to load sample values from the selected field." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>(),
      tr( "Loading field values from WFS layers isn't supported, before the layer is actually inserted, ie. when building queries." )
       )
      )
    );

  gFunctionHelpTexts.insert( "Fuzzy Matching",
    Help( "Fuzzy Matching", tr( "group" ), tr( "This group contains functions for fuzzy comparisons between values." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Fuzzy Matching" ), tr( "This group contains functions for fuzzy comparisons between values." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "General",
    Help( "General", tr( "group" ), tr( "This group contains general assorted functions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "General" ), tr( "This group contains general assorted functions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "GeometryGroup",
    Help( "GeometryGroup", tr( "group" ), tr( "This group contains functions that operate on geometry objects e.g length, area." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "GeometryGroup" ), tr( "This group contains functions that operate on geometry objects e.g length, area." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "ILIKE",
    Help( "ILIKE", tr( "operator" ), tr( "Returns 1 if the first parameter matches case-insensitive the supplied pattern. LIKE can be used instead of ILIKE to make the match case-sensitive. Works with numbers also." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "ILIKE" ), tr( "Returns 1 if the first parameter matches case-insensitive the supplied pattern. LIKE can be used instead of ILIKE to make the match case-sensitive. Works with numbers also." ),
          QList<HelpArg>()
              << HelpArg( tr( "string/number" ), tr( "string to search" ), false, false )
              << HelpArg( tr( "pattern" ), tr( "pattern to find" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'A' ILIKE 'A'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'A' ILIKE 'a'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'A' ILIKE 'B'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'ABC' ILIKE 'b'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'ABC' ILIKE 'B'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'ABC' ILIKE '%b%'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'ABC' ILIKE '%B%'" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "IN",
    Help( "IN", tr( "operator" ), tr( "Returns 1 if value is found within a list of values." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "IN" ), tr( "Returns 1 if value is found within a list of values." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "list of values" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'A' IN ('A','B')" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'A' IN ('C','B')" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "IS",
    Help( "IS", tr( "operator" ), tr( "Returns 1 if a is the same as b." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "IS" ), tr( "Returns 1 if a is the same as b." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "any value" ), false, false )
              << HelpArg( tr( "b" ), tr( "any value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'A' IS 'A'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'A' IS 'a'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 IS 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 IS 2+2" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 IS 2" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "$geometry IS NULL" ), tr( "0, if your geometry is not NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "IS NOT",
    Help( "IS NOT", tr( "operator" ), tr( "Returns 1 if a is not the same as b." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "IS NOT" ), tr( "Returns 1 if a is not the same as b." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'a' IS NOT 'b'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'a' IS NOT 'a'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 IS NOT 2+2" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "LIKE",
    Help( "LIKE", tr( "operator" ), tr( "Returns 1 if the first parameter matches the supplied pattern. Works with numbers also." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "LIKE" ), tr( "Returns 1 if the first parameter matches the supplied pattern. Works with numbers also." ),
          QList<HelpArg>()
              << HelpArg( tr( "string/number" ), tr( "value" ), false, false )
              << HelpArg( tr( "pattern" ), tr( "pattern to compare value with" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'A' LIKE 'A'" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "'A' LIKE 'a'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'A' LIKE 'B'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'ABC' LIKE 'B'" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "'ABC' LIKE '%B%'" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "Math",
    Help( "Math", tr( "group" ), tr( "This group contains math functions e.g square root, sin and cos" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Math" ), tr( "This group contains math functions e.g square root, sin and cos" ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "NOT",
    Help( "NOT", tr( "operator" ), tr( "Negates a condition." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "NOT" ), tr( "Negates a condition." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "condition" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "NOT 1" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "NOT 0" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "NULL",
    Help( "NULL", tr( "value" ), tr( "Equates to a null value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "NULL" ), tr( "Equates to a null value." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "NULL" ), tr( "a null value" ), tr( "") ),
      tr( "To test for NULL use an <pre>IS NULL</pre> or <pre>IS NOT NULL</pre> expression." )
       )
      )
    );

  gFunctionHelpTexts.insert( "OR",
    Help( "OR", tr( "operator" ), tr( "Returns 1 when condition a or b is true." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "OR" ), tr( "Returns 1 when condition a or b is true." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "condition" ), false, false )
              << HelpArg( tr( "b" ), tr( "condition" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "4 = 2+2 OR 1 = 1" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 = 2+2 OR 1 = 2" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 = 2   OR 1 = 2" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "Operators",
    Help( "Operators", tr( "group" ), tr( "This group contains operators e.g + - *" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Operators" ), tr( "This group contains operators e.g + - *" ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Recent (Selection)",
    Help( "Recent (Selection)", tr( "group" ), tr( "This group contains recently used expressions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Recent (Selection)" ), tr( "This group contains recently used expressions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Record",
    Help( "Record", tr( "group" ), tr( "This group contains functions that operate on record identifiers." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Record" ), tr( "This group contains functions that operate on record identifiers." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "String",
    Help( "String", tr( "group" ), tr( "This group contains functions that operate on strings e.g replace, convert to upper case." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "String" ), tr( "This group contains functions that operate on strings e.g replace, convert to upper case." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "Variables",
    Help( "Variables", tr( "group" ), tr( "This group contains dynamic variables which can be inserted into your expressions." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Variables" ), tr( "This group contains dynamic variables which can be inserted into your expressions." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
       )
      )
    );

  gFunctionHelpTexts.insert( "abs",
    Help( "abs", tr( "function" ), tr( "Returns the absolute value of a number." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "abs" ), tr( "Returns the absolute value of a number." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "a number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "abs(-2)" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "acos",
    Help( "acos", tr( "function" ), tr( "Returns the inverse cosine of a value in radians." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "acos" ), tr( "Returns the inverse cosine of a value in radians." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "cosine of an angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "acos(0.5)" ), tr( "1.0471975511966" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "age",
    Help( "age", tr( "function" ), tr( "Returns the difference between two dates or datetimes.<br>The difference is returned as a <code>Interval</code> and needs to be used with one of the following functions in order to extract useful information:<br /><ul><li><code>year</code><li><code>month</code><li><code>week</code><li><code>day</code><li><code>hour</code><li><code>minute</code><li><code>second</code></ul>" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "age" ), tr( "Returns the difference between two dates or datetimes.<br>The difference is returned as a <code>Interval</code> and needs to be used with one of the following functions in order to extract useful information:<br /><ul><li><code>year</code><li><code>month</code><li><code>week</code><li><code>day</code><li><code>hour</code><li><code>minute</code><li><code>second</code></ul>" ),
          QList<HelpArg>()
              << HelpArg( tr( "datetime1" ), tr( "a string, date or datetime representing the later date" ), false, false )
              << HelpArg( tr( "datetime2" ), tr( "a string, date or datetime representing the earlier date" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "age('2012-05-12','2012-05-2')" ), tr( "interval" ), tr( "use <code>day</code> to extract number of days") )
            << HelpExample( tr( "day(age('2012-05-12','2012-05-2'))" ), tr( "10" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "area",
    Help( "area", tr( "function" ), tr( "Returns the area of a geometry polygon object. Calculations are always planimetric in the Spatial Reference System (SRS) of this geometry, and the units of the returned area will match the units for the SRS. This differs from the calculations performed by the $area function, which will perform ellipsoidal calculations based on the project's ellipsoid and area unit settings." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "area" ), tr( "Returns the area of a geometry polygon object. Calculations are always planimetric in the Spatial Reference System (SRS) of this geometry, and the units of the returned area will match the units for the SRS. This differs from the calculations performed by the $area function, which will perform ellipsoidal calculations based on the project's ellipsoid and area unit settings." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "polygon geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "area(geom_from_wkt('POLYGON((0 0, 4 0, 4 2, 0 2, 0 0))'))" ), tr( "8.0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "asin",
    Help( "asin", tr( "function" ), tr( "Returns the inverse sine of a value in radians." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "asin" ), tr( "Returns the inverse sine of a value in radians." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "sine of an angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "asin(1.0)" ), tr( "1.5707963267949" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "atan",
    Help( "atan", tr( "function" ), tr( "Returns the inverse tangent of a value in radians." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "atan" ), tr( "Returns the inverse tangent of a value in radians." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "tan of an angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "atan(0.5)" ), tr( "0.463647609000806" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "atan2",
    Help( "atan2", tr( "function" ), tr( "Returns the inverse tangent of dy/dx by using the signs of the two arguments to determine the quadrant of the result." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "atan2" ), tr( "Returns the inverse tangent of dy/dx by using the signs of the two arguments to determine the quadrant of the result." ),
          QList<HelpArg>()
              << HelpArg( tr( "dy" ), tr( "y coordinate difference" ), false, false )
              << HelpArg( tr( "dx" ), tr( "x coordinate difference" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "atan2(1.0, 1.732)" ), tr( "0.523611477769969" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "attribute",
    Help( "attribute", tr( "function" ), tr( "Returns the value of a specified attribute from a feature." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "attribute" ), tr( "Returns the value of a specified attribute from a feature." ),
          QList<HelpArg>()
              << HelpArg( tr( "feature" ), tr( "a feature" ), false, false )
              << HelpArg( tr( "attribute_name" ), tr( "name of attribute to be returned" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "attribute( $currentfeature, 'name' )" ), tr( "value stored in 'name' attribute for the current feature" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "azimuth",
    Help( "azimuth", tr( "function" ), tr( "Returns the north-based azimuth as the angle in radians measured clockwise from the vertical on pointA to pointB." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "azimuth" ), tr( "Returns the north-based azimuth as the angle in radians measured clockwise from the vertical on pointA to pointB." ),
          QList<HelpArg>()
              << HelpArg( tr( "pointA" ), tr( "point geometry" ), false, false )
              << HelpArg( tr( "pointB" ), tr( "point geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "degrees( azimuth( make_point(25, 45), make_point(75, 100) ) )" ), tr( "42.273689" ), tr( "") )
            << HelpExample( tr( "degrees( azimuth( make_point(75, 100), make_point(25,45) ) )" ), tr( "222.273689" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "bounds",
    Help( "bounds", tr( "function" ), tr( "Returns a geometry which represents the bounding box of an input geometry. Calculations are in the Spatial Reference System of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "bounds" ), tr( "Returns a geometry which represents the bounding box of an input geometry. Calculations are in the Spatial Reference System of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "bounds($geometry)" ), tr( "bounding box of $geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "bounds_height",
    Help( "bounds_height", tr( "function" ), tr( "Returns the height of the bounding box of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "bounds_height" ), tr( "Returns the height of the bounding box of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "bounds_height($geometry)" ), tr( "height of bounding box of $geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "bounds_width",
    Help( "bounds_width", tr( "function" ), tr( "Returns the width of the bounding box of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "bounds_width" ), tr( "Returns the width of the bounding box of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "bounds_width($geometry)" ), tr( "width of bounding box of $geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "buffer",
    Help( "buffer", tr( "function" ), tr( "Returns a geometry that represents all points whose distance from this geometry is less than or equal to distance. Calculations are in the Spatial Reference System of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "buffer" ), tr( "Returns a geometry that represents all points whose distance from this geometry is less than or equal to distance. Calculations are in the Spatial Reference System of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "distance" ), tr( "buffer distance in layer units" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "buffer($geometry, 10.5)" ), tr( "polygon of $geometry buffered by 10.5 units" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "ceil",
    Help( "ceil", tr( "function" ), tr( "Rounds a number upwards." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "ceil" ), tr( "Rounds a number upwards." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "a number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "ceil(4.9)" ), tr( "5" ), tr( "") )
            << HelpExample( tr( "ceil(-4.9)" ), tr( "-4" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "centroid",
    Help( "centroid", tr( "function" ), tr( "Returns the geometric center of a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "centroid" ), tr( "Returns the geometric center of a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "centroid($geometry)" ), tr( "a point geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "clamp",
    Help( "clamp", tr( "function" ), tr( "Restricts an input value to a specified range." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "clamp" ), tr( "Restricts an input value to a specified range." ),
          QList<HelpArg>()
              << HelpArg( tr( "minimum" ), tr( "the smallest value <i>input</i> is allowed to take." ), false, false )
              << HelpArg( tr( "input" ), tr( "a value which will be restricted to the range specified by <i>minimum</i> and <i>maximum</i>" ), false, false )
              << HelpArg( tr( "maximum" ), tr( "the largest value <i>input</i> is allowed to take" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "clamp(1,5,10)" ), tr( "5" ), tr( "<i>input</i> is between 1 and 10 so is returned unchanged") )
            << HelpExample( tr( "clamp(1,0,10)" ), tr( "1" ), tr( "<i>input</i> is less than minimum value of 1, so function returns 1") )
            << HelpExample( tr( "clamp(1,11,10)" ), tr( "10" ), tr( "<i>input</i> is greater than maximum value of 10, so function returns 10") )
       )
      )
    );

  gFunctionHelpTexts.insert( "closest_point",
    Help( "closest_point", tr( "function" ), tr( "Returns the point on geometry 1 that is closest to geometry 2." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "closest_point" ), tr( "Returns the point on geometry 1 that is closest to geometry 2." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry 1" ), tr( "geometry to find closest point on" ), false, false )
              << HelpArg( tr( "geometry 2" ), tr( "geometry to find closest point to" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(closest_point(geom_from_wkt('LINESTRING (20 80, 98 190, 110 180, 50 75 )'),geom_from_wkt('POINT(100 100)')))" ), tr( "Point(73.0769 115.384)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "coalesce",
    Help( "coalesce", tr( "function" ), tr( "Returns the first non-NULL value from the expression list.<br>This function can take any number of arguments." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "coalesce" ), tr( "Returns the first non-NULL value from the expression list.<br>This function can take any number of arguments." ),
          QList<HelpArg>()
              << HelpArg( tr( "expression1" ), tr( "" ), false, true )
              << HelpArg( tr( "expression2" ), tr( "" ), false, true )
              << HelpArg( tr( "expression" ), tr( "any valid expression or value, irregardless of type." ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "coalesce(NULL, 2)" ), tr( "2" ), tr( "") )
            << HelpExample( tr( "coalesce(NULL, 2, 3)" ), tr( "2" ), tr( "") )
            << HelpExample( tr( "coalesce(7, NULL, 3*2)" ), tr( "7" ), tr( "") )
            << HelpExample( tr( "coalesce(\"fieldA\", \"fallbackField\", 'ERROR')" ), tr( "value of fieldA if it is non-NULL else the value of \"fallbackField\" or the string 'ERROR' if both are NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_cmyk",
    Help( "color_cmyk", tr( "function" ), tr( "Returns a string representation of a color based on its cyan, magenta, yellow and black components" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_cmyk" ), tr( "Returns a string representation of a color based on its cyan, magenta, yellow and black components" ),
          QList<HelpArg>()
              << HelpArg( tr( "cyan" ), tr( "cyan component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "magenta" ), tr( "magenta component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "yellow" ), tr( "yellow component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "black" ), tr( "black component of the color, as a percentage integer value from 0 to 100" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_cmyk(100,50,0,10)" ), tr( "0,115,230" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_cmyka",
    Help( "color_cmyka", tr( "function" ), tr( "Returns a string representation of a color based on its cyan, magenta, yellow, black and alpha (transparency) components" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_cmyka" ), tr( "Returns a string representation of a color based on its cyan, magenta, yellow, black and alpha (transparency) components" ),
          QList<HelpArg>()
              << HelpArg( tr( "cyan" ), tr( "cyan component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "magenta" ), tr( "magenta component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "yellow" ), tr( "yellow component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "black" ), tr( "black component of the color, as a percentage integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "alpha" ), tr( "alpha component as an integer value from 0 (completely transparent) to 255 (opaque)." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_cmyk(100,50,0,10,200)" ), tr( "0,115,230,200" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_hsl",
    Help( "color_hsl", tr( "function" ), tr( "Returns a string representation of a color based on its hue, saturation, and lightness attributes." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_hsl" ), tr( "Returns a string representation of a color based on its hue, saturation, and lightness attributes." ),
          QList<HelpArg>()
              << HelpArg( tr( "hue" ), tr( "hue of the color, as an integer value from 0 to 360" ), false, false )
              << HelpArg( tr( "saturation" ), tr( "saturation percentage of the color as an integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "lightness" ), tr( "lightness percentage of the color as an integer value from 0 to 100" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_hsl(100,50,70)" ), tr( "166,217,140" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_hsla",
    Help( "color_hsla", tr( "function" ), tr( "Returns a string representation of a color based on its hue, saturation, lightness and alpha (transparency) attributes" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_hsla" ), tr( "Returns a string representation of a color based on its hue, saturation, lightness and alpha (transparency) attributes" ),
          QList<HelpArg>()
              << HelpArg( tr( "hue" ), tr( "hue of the color, as an integer value from 0 to 360" ), false, false )
              << HelpArg( tr( "saturation" ), tr( "saturation percentage of the color as an integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "lightness" ), tr( "lightness percentage of the color as an integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "alpha" ), tr( "alpha component as an integer value from 0 (completely transparent) to 255 (opaque)." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_hsla(100,50,70,200)" ), tr( "166,217,140,200" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_hsv",
    Help( "color_hsv", tr( "function" ), tr( "Returns a string representation of a color based on its hue, saturation, and value attributes." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_hsv" ), tr( "Returns a string representation of a color based on its hue, saturation, and value attributes." ),
          QList<HelpArg>()
              << HelpArg( tr( "hue" ), tr( "hue of the color, as an integer value from 0 to 360" ), false, false )
              << HelpArg( tr( "saturation" ), tr( "saturation percentage of the color as an integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "value" ), tr( "value percentage of the color as an integer from 0 to 100" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_hsv(40,100,100)" ), tr( "255,170,0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_hsva",
    Help( "color_hsva", tr( "function" ), tr( "Returns a string representation of a color based on its hue, saturation, value and alpha (transparency) attributes." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_hsva" ), tr( "Returns a string representation of a color based on its hue, saturation, value and alpha (transparency) attributes." ),
          QList<HelpArg>()
              << HelpArg( tr( "hue" ), tr( "hue of the color, as an integer value from 0 to 360" ), false, false )
              << HelpArg( tr( "saturation" ), tr( "saturation percentage of the color as an integer value from 0 to 100" ), false, false )
              << HelpArg( tr( "value" ), tr( "value percentage of the color as an integer from 0 to 100" ), false, false )
              << HelpArg( tr( "alpha" ), tr( "alpha component as an integer value from 0 (completely transparent) to 255 (opaque)" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_hsva(40,100,100,200)" ), tr( "255,170,0,200" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_part",
    Help( "color_part", tr( "function" ), tr( "Returns a specific component from a color string, eg the red component or alpha component." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_part" ), tr( "Returns a specific component from a color string, eg the red component or alpha component." ),
          QList<HelpArg>()
              << HelpArg( tr( "color" ), tr( "a color string" ), false, false )
              << HelpArg( tr( "component" ), tr( "a string corresponding to the color component to return. Valid options are:<br /><ul><li>red: RGB red component (0-255)</li><li>green: RGB green component (0-255)</li><li>blue: RGB blue component (0-255)</li><li>alpha: alpha (transparency) value (0-255)</li><li>hue: HSV hue (0-360)</li><li>saturation: HSV saturation (0-100)</li><li>value: HSV value (0-100)</li><li>hsl_hue: HSL hue (0-360)</li><li>hsl_saturation: HSL saturation (0-100)</li><li>lightness: HSL lightness (0-100)</li><li>cyan: CMYK cyan component (0-100)</li><li>magenta: CMYK magenta component (0-100)</li><li>yellow: CMYK yellow component (0-100)</li> <li>black: CMYK black component (0-100)</li></ul>" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_part('200,10,30','green')" ), tr( "10" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_rgb",
    Help( "color_rgb", tr( "function" ), tr( "Returns a string representation of a color based on its red, green, and blue components." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_rgb" ), tr( "Returns a string representation of a color based on its red, green, and blue components." ),
          QList<HelpArg>()
              << HelpArg( tr( "red" ), tr( "red component as an integer value from 0 to 255" ), false, false )
              << HelpArg( tr( "green" ), tr( "green component as an integer value from 0 to 255" ), false, false )
              << HelpArg( tr( "blue" ), tr( "blue component as an integer value from 0 to 255" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_rgb(255,127,0)" ), tr( "255,127,0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "color_rgba",
    Help( "color_rgba", tr( "function" ), tr( "Returns a string representation of a color based on its red, green, blue, and alpha (transparency) components." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "color_rgba" ), tr( "Returns a string representation of a color based on its red, green, blue, and alpha (transparency) components." ),
          QList<HelpArg>()
              << HelpArg( tr( "red" ), tr( "red component as an integer value from 0 to 255" ), false, false )
              << HelpArg( tr( "green" ), tr( "green component as an integer value from 0 to 255" ), false, false )
              << HelpArg( tr( "blue" ), tr( "blue component as an integer value from 0 to 255" ), false, false )
              << HelpArg( tr( "alpha" ), tr( "alpha component as an integer value from 0 (completely transparent) to 255 (opaque)." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "color_rgba(255,127,0,200)" ), tr( "255,127,0,200" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "combine",
    Help( "combine", tr( "function" ), tr( "Returns the combination of two geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "combine" ), tr( "Returns the combination of two geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry1" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry2" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( combine( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 2 1)' ) ) )" ), tr( "MULTILINESTRING((4 4, 2 1), (3 3, 4 4), (4 4, 5 5))" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt( combine( geom_from_wkt( 'LINESTRING(3 3, 4 4)' ), geom_from_wkt( 'LINESTRING(3 3, 6 6, 2 1)' ) ) )" ), tr( "LINESTRING(3 3, 4 4, 6 6, 2 1)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "concat",
    Help( "concat", tr( "function" ), tr( "Concatenates several strings to one. NULL values are converted to empty strings. Other values (like numbers) are converted to strings." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "concat" ), tr( "Concatenates several strings to one. NULL values are converted to empty strings. Other values (like numbers) are converted to strings." ),
          QList<HelpArg>()
              << HelpArg( tr( "string1" ), tr( "" ), false, true )
              << HelpArg( tr( "string2" ), tr( "" ), false, true )
              << HelpArg( tr( "string" ), tr( "a string value" ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "concat('sun', 'set')" ), tr( "'sunset'" ), tr( "") )
            << HelpExample( tr( "concat('a','b','c','d','e')" ), tr( "'abcde'" ), tr( "") )
            << HelpExample( tr( "concat('Anno ', 1984)" ), tr( "'Anno 1984'" ), tr( "") )
            << HelpExample( tr( "concat('The Wall', NULL)" ), tr( "'The Wall'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "contains",
    Help( "contains", tr( "function" ), tr( "Tests whether a geometry contains another. Returns true if and only if no points of geometry b lie in the exterior of geometry a, and at least one point of the interior of b lies in the interior of a." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "contains" ), tr( "Tests whether a geometry contains another. Returns true if and only if no points of geometry b lie in the exterior of geometry a, and at least one point of the interior of b lies in the interior of a." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( combine( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 2 1)' ) ) )" ), tr( "MULTILINESTRING((4 4, 2 1), (3 3, 4 4), (4 4, 5 5))" ), tr( "") )
            << HelpExample( tr( "contains( geom_from_wkt( 'POLYGON((0 0, 0 1, 1 1, 1 0, 0 0))' ), geom_from_wkt( 'POINT(0.5 0.5 )' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "contains( geom_from_wkt( 'POLYGON((0 0, 0 1, 1 1, 1 0, 0 0))' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "convex_hull",
    Help( "convex_hull", tr( "function" ), tr( "Returns the convex hull of a geometry. It represents the minimum convex geometry that encloses all geometries within the set." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "convex_hull" ), tr( "Returns the convex hull of a geometry. It represents the minimum convex geometry that encloses all geometries within the set." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( combine( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 2 1)' ) ) )" ), tr( "MULTILINESTRING((4 4, 2 1), (3 3, 4 4), (4 4, 5 5))" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt( convex_hull( geom_from_wkt( 'LINESTRING(3 3, 4 4, 4 10)' ) ) )" ), tr( "POLYGON((3 3,4 10,4 4,3 3))" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "cos",
    Help( "cos", tr( "function" ), tr( "Returns cosine of an angle." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "cos" ), tr( "Returns cosine of an angle." ),
          QList<HelpArg>()
              << HelpArg( tr( "angle" ), tr( "angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "cos(1.571)" ), tr( "0.000796326710733263" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "crosses",
    Help( "crosses", tr( "function" ), tr( "Tests whether a geometry crosses another. Returns true if the supplied geometries have some, but not all, interior points in common." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "crosses" ), tr( "Tests whether a geometry crosses another. Returns true if the supplied geometries have some, but not all, interior points in common." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "crosses( geom_from_wkt( 'LINESTRING(3 5, 4 4, 5 3)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "crosses( geom_from_wkt( 'POINT(4 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "darker",
    Help( "darker", tr( "function" ), tr( "Returns a darker (or lighter) color string" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "darker" ), tr( "Returns a darker (or lighter) color string" ),
          QList<HelpArg>()
              << HelpArg( tr( "color" ), tr( "a color string" ), false, false )
              << HelpArg( tr( "factor" ), tr( "a integer number corresponding to the darkening factor:<ul><li>if the factor is greater than 100, this functions returns a darker color (for e.g., setting factor to 300 returns a color that has one-third the brightness);</li><li>if the factor is less than 100, the return color is lighter, but using the lighter() function for this purpose is recommended;</li><li>if the factor is 0 or negative, the return value is unspecified.</li></ul>" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "darker('200,10,30',300)" ), tr( "'66,3,10,255'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "day",
    Help( "day", tr( "function" ), tr( "Extract the day from a date, or the number of days from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Date variant" ), tr( "Extract the day from a date or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "date" ), tr( "a date or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "day('2012-05-12')" ), tr( "12" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in days of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of days from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "day(tointerval('3 days'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "day(age('2012-01-01','2010-01-01'))" ), tr( "730" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "day_of_week",
    Help( "day_of_week", tr( "function" ), tr( "Returns the day of the week for a specified date or datetime. The returned value ranges from 0 to 6, where 0 corresponds to a Sunday and 6 to a Saturday." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "day_of_week" ), tr( "Returns the day of the week for a specified date or datetime. The returned value ranges from 0 to 6, where 0 corresponds to a Sunday and 6 to a Saturday." ),
          QList<HelpArg>()
              << HelpArg( tr( "date" ), tr( "date or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "day_of_week(todate('2015-09-21'))" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "degrees",
    Help( "degrees", tr( "function" ), tr( "Converts from radians to degrees." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "degrees" ), tr( "Converts from radians to degrees." ),
          QList<HelpArg>()
              << HelpArg( tr( "radians" ), tr( "numeric value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "degrees(3.14159)" ), tr( "180" ), tr( "") )
            << HelpExample( tr( "degrees(1)" ), tr( "57.2958" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "difference",
    Help( "difference", tr( "function" ), tr( "Returns a geometry that represents that part of geometry_a that does not intersect with geometry_b." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "difference" ), tr( "Returns a geometry that represents that part of geometry_a that does not intersect with geometry_b." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry_a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry_b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( difference( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4)' ) ) )" ), tr( "LINESTRING(4 4, 5 5)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "disjoint",
    Help( "disjoint", tr( "function" ), tr( "Tests whether geometries do not spatially intersect. Returns true if the geometries do not share any space together." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "disjoint" ), tr( "Tests whether geometries do not spatially intersect. Returns true if the geometries do not share any space together." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "disjoint( geom_from_wkt( 'POLYGON((0 0, 0 1, 1 1, 1 0, 0 0 ))' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "disjoint( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'POINT(4 4)' ))" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "distance",
    Help( "distance", tr( "function" ), tr( "Returns the minimum distance (based on spatial ref) between two geometries in projected units." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "distance" ), tr( "Returns the minimum distance (based on spatial ref) between two geometries in projected units." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "distance( geom_from_wkt( 'POINT(4 4)' ), geom_from_wkt( 'POINT(4 8)' ) )" ), tr( "4" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "end_point",
    Help( "end_point", tr( "function" ), tr( "Returns the last node from a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "end_point" ), tr( "Returns the last node from a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(end_point(geom_from_wkt('LINESTRING(4 0, 4 2, 0 2)')))" ), tr( "'Point (0 2)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "eval",
    Help( "eval", tr( "function" ), tr( "Evaluates an expression which is passed in a string. Useful to expand dynamic parameters passed as context variables or fields." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "eval" ), tr( "Evaluates an expression which is passed in a string. Useful to expand dynamic parameters passed as context variables or fields." ),
          QList<HelpArg>()
              << HelpArg( tr( "expression" ), tr( "an expression string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "eval('\'nice\'')" ), tr( "'nice'" ), tr( "") )
            << HelpExample( tr( "eval(@expression_var)" ), tr( "[whatever the result of evaluating @expression_var might be...]" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "exp",
    Help( "exp", tr( "function" ), tr( "Returns exponential of an value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "exp" ), tr( "Returns exponential of an value." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "number to return exponent of" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "exp(1.0)" ), tr( "2.71828182845905" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "exterior_ring",
    Help( "exterior_ring", tr( "function" ), tr( "Returns a line string representing the exterior ring of a polygon geometry. If the geometry is not a polygon then the result will be null." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "exterior_ring" ), tr( "Returns a line string representing the exterior ring of a polygon geometry. If the geometry is not a polygon then the result will be null." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a polygon geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(exterior_ring(geom_from_wkt('POLYGON((-1 -1, 4 0, 4 2, 0 2, -1 -1),( 0.1 0.1, 0.1 0.2, 0.2 0.2, 0.2, 0.1, 0.1 0.1))')))" ), tr( "'LineString (-1 -1, 4 0, 4 2, 0 2, -1 -1)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "extrude",
    Help( "extrude", tr( "function" ), tr( "Returns an extruded version of the input (Multi-)Curve or (Multi-)Linestring geometry with an extension specified by x and y." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "extrude" ), tr( "Returns an extruded version of the input (Multi-)Curve or (Multi-)Linestring geometry with an extension specified by x and y." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a polygon geometry" ), false, false )
              << HelpArg( tr( "x" ), tr( "x extension, numeric value" ), false, false )
              << HelpArg( tr( "y" ), tr( "y extension, numeric value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "extrude(geom_from_wkt('LineString(1 2, 3 2, 4 3)'), 1, 2)" ), tr( "Polygon ((1 2, 3 2, 4 3, 5 5, 4 4, 2 4, 1 2))" ), tr( "") )
            << HelpExample( tr( "extrude(geom_from_wkt('MultiLineString((1 2, 3 2), (4 3, 8 3)'), 1, 2)" ), tr( "MultiPolygon (((1 2, 3 2, 4 4, 2 4, 1 2)),((4 3, 8 3, 9 5, 5 5, 4 3)))" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "floor",
    Help( "floor", tr( "function" ), tr( "Rounds a number downwards." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "floor" ), tr( "Rounds a number downwards." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "a number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "floor(4.9)" ), tr( "4" ), tr( "") )
            << HelpExample( tr( "floor(-4.9)" ), tr( "-5" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "format",
    Help( "format", tr( "function" ), tr( "Format a string using supplied arguments." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "format" ), tr( "Format a string using supplied arguments." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "A string with place holders for the arguments. Use %1, %2, etc for placeholders. Placeholders can be repeated." ), false, false )
              << HelpArg( tr( "arg1" ), tr( "" ), false, true )
              << HelpArg( tr( "arg2" ), tr( "" ), false, true )
              << HelpArg( tr( "arg" ), tr( "any type. Any number of arguments." ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "format('This %1 a %2','is', 'test')" ), tr( "'This is a test''" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "format_date",
    Help( "format_date", tr( "function" ), tr( "Format a date type or string into a custom string format. Uses Qt date/time format strings.  See <a href='http://qt-project.org/doc/qt-4.8/qdatetime.html#toString'>QDateTime::toString</a>." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "format_date" ), tr( "Format a date type or string into a custom string format. Uses Qt date/time format strings.  See <a href='http://qt-project.org/doc/qt-4.8/qdatetime.html#toString'>QDateTime::toString</a>." ),
          QList<HelpArg>()
              << HelpArg( tr( "datetime" ), tr( "date, time or datetime value" ), false, false )
              << HelpArg( tr( "format" ), tr( "String template used to format the string. <table><thead><tr><th>Expression</th><th>Output</th></tr></thead><tr valign=\"top\"><td>d</td><td>the day as number without a leading zero (1 to 31)</td></tr><tr valign=\"top\"><td>dd</td><td>the day as number with a leading zero (01 to 31)</td></tr><tr valign=\"top\"><td>ddd</td><td>the abbreviated localized day name (e.g. 'Mon' to 'Sun')</td></tr><tr valign=\"top\"><td>dddd</td><td>the long localized day name (e.g. 'Monday' to 'Sunday')</td></tr><tr valign=\"top\"><td>M</td><td>the month as number without a leading zero (1-12)</td></tr><tr valign=\"top\"><td>MM</td><td>the month as number with a leading zero (01-12)</td></tr><tr valign=\"top\"><td>MMM</td><td>the abbreviated localized month name (e.g. 'Jan' to 'Dec')</td></tr><tr valign=\"top\"><td>MMMM</td><td>the long localized month name (e.g. 'January' to 'December')</td></tr><tr valign=\"top\"><td>yy</td><td>the year as two digit number (00-99)</td></tr><tr valign=\"top\"><td>yyyy</td><td>the year as four digit number</td></tr></table><p>These expressions may be used for the time part of the format string:</p><table><thead><tr><th>Expression</th><th>Output</th></tr></thead><tr valign=\"top\"><td>h</td><td>the hour without a leading zero (0 to 23 or 1 to 12 if AM/PM display)</td></tr><tr valign=\"top\"><td>hh</td><td>the hour with a leading zero (00 to 23 or 01 to 12 if AM/PM display)</td></tr><tr valign=\"top\"><td>H</td><td>the hour without a leading zero (0 to 23, even with AM/PM display)</td></tr><tr valign=\"top\"><td>HH</td><td>the hour with a leading zero (00 to 23, even with AM/PM display)</td></tr><tr valign=\"top\"><td>m</td><td>the minute without a leading zero (0 to 59)</td></tr><tr valign=\"top\"><td>mm</td><td>the minute with a leading zero (00 to 59)</td></tr><tr valign=\"top\"><td>s</td><td>the second without a leading zero (0 to 59)</td></tr><tr valign=\"top\"><td>ss</td><td>the second with a leading zero (00 to 59)</td></tr><tr valign=\"top\"><td>z</td><td>the milliseconds without leading zeroes (0 to 999)</td></tr><tr valign=\"top\"><td>zzz</td><td>the milliseconds with leading zeroes (000 to 999)</td></tr><tr valign=\"top\"><td>AP or A</td><td>interpret as an AM/PM time. <i>AP</i> must be either \"AM\" or \"PM\".</td></tr><tr valign=\"top\"><td>ap or a</td><td>Interpret as an AM/PM time. <i>ap</i> must be either \"am\" or \"pm\".</td></tr></table>" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "format_date('2012-05-15','dd.MM.yyyy')" ), tr( "'15.05.2012'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "format_number",
    Help( "format_number", tr( "function" ), tr( "Returns a number formatted with the locale separator for thousands. Also truncates the number to the number of supplied places." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "format_number" ), tr( "Returns a number formatted with the locale separator for thousands. Also truncates the number to the number of supplied places." ),
          QList<HelpArg>()
              << HelpArg( tr( "number" ), tr( "number to be formatted" ), false, false )
              << HelpArg( tr( "places" ), tr( "integer representing the number of decimal places to truncate the string to." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "format_number(10000000.332,2)" ), tr( "'10,000,000.33'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "geom_from_gml",
    Help( "geom_from_gml", tr( "function" ), tr( "Returns a geometry from a GML representation of geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "geom_from_gml" ), tr( "Returns a geometry from a GML representation of geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "gml" ), tr( "GML representation of a geometry as a string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_from_gml( '<gml:LineString srsName=\"EPSG:4326\"><gml:coordinates>4,4 5,5 6,6</gml:coordinates></gml:LineString>')" ), tr( "a geometry object" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "geom_from_wkt",
    Help( "geom_from_wkt", tr( "function" ), tr( "Returns a geometry created from a Well-Known Text (WKT) representation." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "geom_from_wkt" ), tr( "Returns a geometry created from a Well-Known Text (WKT) representation." ),
          QList<HelpArg>()
              << HelpArg( tr( "text" ), tr( "Well-Known Text (WKT) representation of a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_from_wkt( 'POINT(4 5)' )" ), tr( "a geometry object" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "geom_to_wkt",
    Help( "geom_to_wkt", tr( "function" ), tr( "Returns the Well-Known Text (WKT) representation of the geometry without SRID metadata." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "geom_to_wkt" ), tr( "Returns the Well-Known Text (WKT) representation of the geometry without SRID metadata." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( $geometry )" ), tr( "POINT(6 50)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "geometry",
    Help( "geometry", tr( "function" ), tr( "Returns a feature's geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "geometry" ), tr( "Returns a feature's geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "feature" ), tr( "a feature object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( geometry( get_feature( layer, attributeField, value ) ) )" ), tr( "'POINT(6 50)'" ), tr( "") )
            << HelpExample( tr( "intersects( $geometry, geometry( get_feature( layer, attributeField, value ) ) )" ), tr( "true" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "geometry_n",
    Help( "geometry_n", tr( "function" ), tr( "Returns a specific geometry from a geometry collection, or null if the input geometry is not a collection." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "geometry_n" ), tr( "Returns a specific geometry from a geometry collection, or null if the input geometry is not a collection." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry collection" ), false, false )
              << HelpArg( tr( "index" ), tr( "index of geometry to return, where 1 is the first geometry in the collection" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(geometry_n(geom_from_wkt('GEOMETRYCOLLECTION(POINT(0 1), POINT(0 0), POINT(1 0), POINT(1 1))'),3))" ), tr( "'Point (1 0)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "get_feature",
    Help( "get_feature", tr( "function" ), tr( "Returns the first feature of a layer matching a given attribute value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "get_feature" ), tr( "Returns the first feature of a layer matching a given attribute value." ),
          QList<HelpArg>()
              << HelpArg( tr( "layer" ), tr( "layer name or ID" ), false, false )
              << HelpArg( tr( "attribute" ), tr( "attribute name" ), false, false )
              << HelpArg( tr( "value" ), tr( "attribute value to match" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "get_feature('streets','name','main st')" ), tr( "first feature found in \"streets\" layer with \"main st\" value in the \"name\" field" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "hamming_distance",
    Help( "hamming_distance", tr( "function" ), tr( "Returns the Hamming distance between two strings. This equates to the number of characters at corresponding positions within the input strings where the characters are different. The input strings must be the same length, and the comparison is case-sensitive." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "hamming_distance" ), tr( "Returns the Hamming distance between two strings. This equates to the number of characters at corresponding positions within the input strings where the characters are different. The input strings must be the same length, and the comparison is case-sensitive." ),
          QList<HelpArg>()
              << HelpArg( tr( "string1" ), tr( "a string" ), false, false )
              << HelpArg( tr( "string2" ), tr( "a string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "hamming_distance('abc','xec')" ), tr( "2" ), tr( "") )
            << HelpExample( tr( "hamming_distance('abc','ABc')" ), tr( "2" ), tr( "") )
            << HelpExample( tr( "hamming_distance(upper('abc'),upper('ABC'))" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "hour",
    Help( "hour", tr( "function" ), tr( "Extract the hour part from a datetime or time, or the number of hours from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Time variant" ), tr( "Extract the hour part from a time or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "datetime" ), tr( "a time or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "hour('2012-07-22T13:24:57')" ), tr( "13" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in hours of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of hours from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "hour(tointerval('3 hours'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "hour(age('2012-07-22T13:00:00','2012-07-22T10:00:00'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "hour(age('2012-01-01','2010-01-01'))" ), tr( "17520" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "if",
    Help( "if", tr( "function" ), tr( "Tests a condition and returns a different result depending on the conditional check." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "if" ), tr( "Tests a condition and returns a different result depending on the conditional check." ),
          QList<HelpArg>()
              << HelpArg( tr( "condition" ), tr( "the condition which should be checked" ), false, false )
              << HelpArg( tr( "result_when_true" ), tr( "the result which will be returned when the condition is True" ), false, false )
              << HelpArg( tr( "result_when_false" ), tr( "the result which will be returned when the condition is False" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "if( 1, 'One', 'Not One' )" ), tr( "'One'" ), tr( "") )
            << HelpExample( tr( "if( 8, 'One', 'Not One' )" ), tr( "'Not One'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "interior_ring_n",
    Help( "interior_ring_n", tr( "function" ), tr( "Returns a specific interior ring from a polygon geometry, or null if the geometry is not a polygon." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "interior_ring_n" ), tr( "Returns a specific interior ring from a polygon geometry, or null if the geometry is not a polygon." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "polygon geometry" ), false, false )
              << HelpArg( tr( "index" ), tr( "index of interior to return, where 1 is the first interior ring" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(interior_ring_n(geom_from_wkt('POLYGON((-1 -1, 4 0, 4 2, 0 2, -1 -1),(-0.1 -0.1, 0.4 0, 0.4 0.2, 0 0.2, -0.1 -0.1),(-1 -1, 4 0, 4 2, 0 2, -1 -1))'),1))" ), tr( "'LineString (-0.1 -0.1, 0.4 0, 0.4 0.2, 0 0.2, -0.1 -0.1))'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "intersection",
    Help( "intersection", tr( "function" ), tr( "Returns a geometry that represents the shared portion of two geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "intersection" ), tr( "Returns a geometry that represents the shared portion of two geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry1" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry2" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( intersection( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4)' ) ) )" ), tr( "LINESTRING(3 3, 4 4)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "intersects",
    Help( "intersects", tr( "function" ), tr( "Tests whether a geometry intersects another. Returns true if the geometries spatially intersect (share any portion of space) and false if they do not." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "intersects" ), tr( "Tests whether a geometry intersects another. Returns true if the geometries spatially intersect (share any portion of space) and false if they do not." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "intersects( geom_from_wkt( 'POINT(4 4)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "intersects( geom_from_wkt( 'POINT(4 5)' ), geom_from_wkt( 'POINT(5 5)' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "intersects_bbox",
    Help( "intersects_bbox", tr( "function" ), tr( "Tests whether a geometry's bounding box overlaps another geometry's bounding box. Returns true if the geometries spatially intersect the bounding box defined and false if they do not." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "intersects_bbox" ), tr( "Tests whether a geometry's bounding box overlaps another geometry's bounding box. Returns true if the geometries spatially intersect the bounding box defined and false if they do not." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "intersects_bbox( geom_from_wkt( 'POINT(4 5)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "intersects_bbox( geom_from_wkt( 'POINT(6 5)' ), geom_from_wkt( 'POLYGON((3 3, 4 4, 5 5, 3 3))' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "is_closed",
    Help( "is_closed", tr( "function" ), tr( "Returns true if a line string is closed (start and end points are coincident), or false if a line string is not closed. If the geometry is not a line string then the result will be null." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "is_closed" ), tr( "Returns true if a line string is closed (start and end points are coincident), or false if a line string is not closed. If the geometry is not a line string then the result will be null." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a line string geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "is_closed(geom_from_wkt('LINESTRING(0 0, 1 1, 2 2)'))" ), tr( "false" ), tr( "") )
            << HelpExample( tr( "is_closed(geom_from_wkt('LINESTRING(0 0, 1 1, 2 2, 0 0)'))" ), tr( "true" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "layer_property",
    Help( "layer_property", tr( "function" ), tr( "Returns a matching layer property or metadata value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "layer_property" ), tr( "Returns a matching layer property or metadata value." ),
          QList<HelpArg>()
              << HelpArg( tr( "layer" ), tr( "a string, representing either a layer name or layer ID" ), false, false )
              << HelpArg( tr( "property" ), tr( "a string corresponding to the property to return. Valid options are:<br /><ul><li>name: layer name</li><li>id: layer ID</li><li>title: metadata title string</li><li>abstract: metadata abstract string</li><li>keywords: metadata keywords</li><li>data_url: metadata URL</li><li>attribution: metadata attribution string</li><li>attribution_url: metadata attribution URL</li><li>source: layer source</li><li>min_scale: minimum display scale for layer</li><li>max_scale: maximum display scale for layer</li><li>crs: layer CRS</li><li>crs_definition: layer CRS full definition</li> <li>extent: layer extent (as a geometry object)</li><li>type: layer type, eg Vector or Raster</li><li>storage_type: storage format (vector layers only)</li><li>geometry_type: geometry type, eg Point (vector layers only)</li><li>feature_count: approximate feature count for layer (vector layers only)</li></ul>" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "layer_property('streets','title')" ), tr( "'Basemap Streets'" ), tr( "") )
            << HelpExample( tr( "layer_property('airports','feature_count')" ), tr( "120" ), tr( "") )
            << HelpExample( tr( "layer_property('landsat','crs')" ), tr( "'EPSG:4326'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "left",
    Help( "left", tr( "function" ), tr( "Returns a substring that contains the <i>n</i> leftmost characters of the string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "left" ), tr( "Returns a substring that contains the <i>n</i> leftmost characters of the string." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "a string" ), false, false )
              << HelpArg( tr( "length" ), tr( "integer. The number of characters from the left of the string to return." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "left('Hello World',5)" ), tr( "'Hello'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "length",
    Help( "length", tr( "function" ), tr( "Returns the number of characters in a string or the length of a geometry linestring." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "String variant" ), tr( "Returns the number of characters in a string." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to count length of" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "length('hello')" ), tr( "5" ), tr( "") )
       )
        << HelpVariant( tr( "Geometry variant" ), tr( "Calculate the length of a geometry line object. Calculations are always planimetric in the Spatial Reference System (SRS) of this geometry, and the units of the returned length will match the units for the SRS. This differs from the calculations performed by the $length function, which will perform ellipsoidal calculations based on the project's ellipsoid and distance unit settings." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "line geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "length(geom_from_wkt('LINESTRING(0 0, 4 0)'))" ), tr( "4.0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "levenshtein",
    Help( "levenshtein", tr( "function" ), tr( "Returns the Levenshtein edit distance between two strings. This equates to the minimum number of character edits (insertions, deletions or substitutions) required to change one string to another.<br />The Levenshtein distance is a measure of the similarity between two strings. Smaller distances mean the strings are more similar, and larger distances indicate more different strings. The distance is case sensitive." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "levenshtein" ), tr( "Returns the Levenshtein edit distance between two strings. This equates to the minimum number of character edits (insertions, deletions or substitutions) required to change one string to another.<br />The Levenshtein distance is a measure of the similarity between two strings. Smaller distances mean the strings are more similar, and larger distances indicate more different strings. The distance is case sensitive." ),
          QList<HelpArg>()
              << HelpArg( tr( "string1" ), tr( "a string" ), false, false )
              << HelpArg( tr( "string2" ), tr( "a string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "levenshtein('kittens','mitten')" ), tr( "2" ), tr( "") )
            << HelpExample( tr( "levenshtein('Kitten','kitten')" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "levenshtein(upper('Kitten'),upper('kitten'))" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "lighter",
    Help( "lighter", tr( "function" ), tr( "Returns a lighter (or darker) color string" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "lighter" ), tr( "Returns a lighter (or darker) color string" ),
          QList<HelpArg>()
              << HelpArg( tr( "color" ), tr( "a color string" ), false, false )
              << HelpArg( tr( "factor" ), tr( "a integer number corresponding to the lightening factor:<ul><li>if the factor is greater than 100, this functions returns a lighter color (for e.g., setting factor to 150 returns a color that is 50% brighter);</li><li>if the factor is less than 100, the return color is darker, but using the darker() function for this purpose is recommended;</li><li>if the factor is 0 or negative, the return value is unspecified.</li></ul>" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "lighter('200,10,30',200)" ), tr( "'255,158,168,255'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "ln",
    Help( "ln", tr( "function" ), tr( "Returns the natural logarithm of a value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "ln" ), tr( "Returns the natural logarithm of a value." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "numeric value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "ln(1)" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "ln(2.7182818284590452354)" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "log",
    Help( "log", tr( "function" ), tr( "Returns the value of the logarithm of the passed value and base." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "log" ), tr( "Returns the value of the logarithm of the passed value and base." ),
          QList<HelpArg>()
              << HelpArg( tr( "base" ), tr( "any positive number" ), false, false )
              << HelpArg( tr( "value" ), tr( "any positive number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "log(2, 32)" ), tr( "5" ), tr( "") )
            << HelpExample( tr( "log(0.5, 32)" ), tr( "-5" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "log10",
    Help( "log10", tr( "function" ), tr( "Returns the value of the base 10 logarithm of the passed expression." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "log10" ), tr( "Returns the value of the base 10 logarithm of the passed expression." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "any positive number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "log10(1)" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "log10(100)" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "longest_common_substring",
    Help( "longest_common_substring", tr( "function" ), tr( "Returns the longest common substring between two strings. This substring is the longest string that is a substring of the two input strings. Eg, the longest common substring of \"ABABC\" and \"BABCA\" is \"ABC\". The substring is case sensitive." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "longest_common_substring" ), tr( "Returns the longest common substring between two strings. This substring is the longest string that is a substring of the two input strings. Eg, the longest common substring of \"ABABC\" and \"BABCA\" is \"ABC\". The substring is case sensitive." ),
          QList<HelpArg>()
              << HelpArg( tr( "string1" ), tr( "a string" ), false, false )
              << HelpArg( tr( "string2" ), tr( "a string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "longest_common_substring('ABABC','BABCA')" ), tr( "'ABC'" ), tr( "") )
            << HelpExample( tr( "longest_common_substring('abcDeF','abcdef')" ), tr( "'abc'" ), tr( "") )
            << HelpExample( tr( "longest_common_substring(upper('abcDeF'),upper('abcdex'))" ), tr( "'ABCDE'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "lower",
    Help( "lower", tr( "function" ), tr( "Converts a string to lower case letters." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "lower" ), tr( "Converts a string to lower case letters." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "the string to convert to lower case" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "lower('HELLO World')" ), tr( "'hello world'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "lpad",
    Help( "lpad", tr( "function" ), tr( "Returns a string padded to supplied width using a fill character." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "lpad" ), tr( "Returns a string padded to supplied width using a fill character." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to pad" ), false, false )
              << HelpArg( tr( "width" ), tr( "length of new string" ), false, false )
              << HelpArg( tr( "fill" ), tr( "character to pad the remaining space with" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "lpad('Hello', 10, 'x')" ), tr( "'xxxxxHello'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "m",
    Help( "m", tr( "function" ), tr( "Returns the m value of a point geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "m" ), tr( "Returns the m value of a point geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a point geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "m( geom_from_wkt( 'POINTM(2 5 4)' ) )" ), tr( "4" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "make_line",
    Help( "make_line", tr( "function" ), tr( "Creates a line geometry from a series of point geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "make_line" ), tr( "Creates a line geometry from a series of point geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "point1" ), tr( "" ), false, true )
              << HelpArg( tr( "point2" ), tr( "" ), false, true )
              << HelpArg( tr( "point" ), tr( "a point geometry" ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(make_line(make_point(2,4),make_point(3,5)))" ), tr( "'LineString (2 4, 3 5)'" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt(make_line(make_point(2,4),make_point(3,5),make_point(9,7)))" ), tr( "'LineString (2 4, 3 5, 9 7)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "make_point",
    Help( "make_point", tr( "function" ), tr( "Creates a point geometry from an x and y (and optional z and m) value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "make_point" ), tr( "Creates a point geometry from an x and y (and optional z and m) value." ),
          QList<HelpArg>()
              << HelpArg( tr( "x" ), tr( "x coordinate of point" ), false, false )
              << HelpArg( tr( "y" ), tr( "y coordinate of point" ), false, false )
              << HelpArg( tr( "z" ), tr( "optional z coordinate of point" ), false, false )
              << HelpArg( tr( "m" ), tr( "optional m value of point" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(make_point(2,4))" ), tr( "'Point (2 4)'" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt(make_point(2,4,6))" ), tr( "'PointZ (2 4 6)'" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt(make_point(2,4,6,8))" ), tr( "'PointZM (2 4 6 8)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "make_point_m",
    Help( "make_point_m", tr( "function" ), tr( "Creates a point geometry from an x, y coordinate and m value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "make_point_m" ), tr( "Creates a point geometry from an x, y coordinate and m value." ),
          QList<HelpArg>()
              << HelpArg( tr( "x" ), tr( "x coordinate of point" ), false, false )
              << HelpArg( tr( "y" ), tr( "y coordinate of point" ), false, false )
              << HelpArg( tr( "m" ), tr( "m value of point" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(make_point_m(2,4,6))" ), tr( "'PointM (2 4 6)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "make_polygon",
    Help( "make_polygon", tr( "function" ), tr( "Creates a polygon geometry from an outer ring and optional series of inner ring geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "make_polygon" ), tr( "Creates a polygon geometry from an outer ring and optional series of inner ring geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "outerRing" ), tr( "closed line geometry for polygon's outer ring" ), false, false )
              << HelpArg( tr( "innerRing1" ), tr( "" ), false, true )
              << HelpArg( tr( "innerRing2" ), tr( "" ), false, true )
              << HelpArg( tr( "innerRing" ), tr( "optional closed line geometry for inner ring" ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(make_polygon(geom_from_wkt('LINESTRING( 0 0, 0 1, 1 1, 1 0, 0 0 )')))" ), tr( "'Polygon ((0 0, 0 1, 1 1, 1 0, 0 0))'" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt(make_polygon(geom_from_wkt('LINESTRING( 0 0, 0 1, 1 1, 1 0, 0 0 )'),geom_from_wkt('LINESTRING( 0.1 0.1, 0.1 0.2, 0.2 0.2, 0.2 0.1, 0.1 0.1 )'),geom_from_wkt('LINESTRING( 0.8 0.8, 0.8 0.9, 0.9 0.9, 0.9 0.8, 0.8 0.8 )')))" ), tr( "'Polygon ((0 0, 0 1, 1 1, 1 0, 0 0),(0.1 0.1, 0.1 0.2, 0.2 0.2, 0.2 0.1, 0.1 0.1),(0.8 0.8, 0.8 0.9, 0.9 0.9, 0.9 0.8, 0.8 0.8))'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "max",
    Help( "max", tr( "function" ), tr( "Returns the largest value in a set of values." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "max" ), tr( "Returns the largest value in a set of values." ),
          QList<HelpArg>()
              << HelpArg( tr( "value1" ), tr( "" ), false, true )
              << HelpArg( tr( "value2" ), tr( "" ), false, true )
              << HelpArg( tr( "value" ), tr( "a number" ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "max(2,10.2,5.5)" ), tr( "10.2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "min",
    Help( "min", tr( "function" ), tr( "Returns the smallest value in a set of values." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "min" ), tr( "Returns the smallest value in a set of values." ),
          QList<HelpArg>()
              << HelpArg( tr( "value1" ), tr( "" ), false, true )
              << HelpArg( tr( "value2" ), tr( "" ), false, true )
              << HelpArg( tr( "value" ), tr( "a number" ), true, false ),
          /* variableLenArguments */ true,
          QList<HelpExample>()
            << HelpExample( tr( "min(20.5,10,6.2)" ), tr( "6.2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "minute",
    Help( "minute", tr( "function" ), tr( "Extract the minutes part from a datetime or time, or the number of minutes from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Time variant" ), tr( "Extract the minutes part from a time or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "datetime" ), tr( "a time or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "minute('2012-07-22T13:24:57')" ), tr( "24" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in minutes of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of minutes from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "minute(tointerval('3 minutes'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "minute(age('2012-07-22T00:20:00','2012-07-22T00:00:00'))" ), tr( "20" ), tr( "") )
            << HelpExample( tr( "minute(age('2012-01-01','2010-01-01'))" ), tr( "1051200" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "month",
    Help( "month", tr( "function" ), tr( "Extract the month part from a date, or the number of months from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Date variant" ), tr( "Extract the month part from a date or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "date" ), tr( "a date or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "month('2012-05-12')" ), tr( "05" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in months of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of months from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "month(to_interval('3 months'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "month(age('2012-01-01','2010-01-01'))" ), tr( "4.03333" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "nodes_to_points",
    Help( "nodes_to_points", tr( "function" ), tr( "Returns a multipoint geometry consisting of every node in the input geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "nodes_to_points" ), tr( "Returns a multipoint geometry consisting of every node in the input geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry object" ), false, false )
              << HelpArg( tr( "ignore_closing_nodes" ), tr( "optional argument specifying whether to include duplicate nodes which close lines or polygons rings. Defaults to false, set to true to avoid including these duplicate nodes in the output collection." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(nodes_to_points(geom_from_wkt('LINESTRING(0 0, 1 1, 2 2)')))" ), tr( "'MultiPoint ((0 0),(1 1),(2 2))'" ), tr( "") )
            << HelpExample( tr( "geom_to_wkt(nodes_to_points(geom_from_wkt('POLYGON((-1 -1, 4 0, 4 2, 0 2, -1 -1))'),true))" ), tr( "'MultiPoint ((-1 -1),(4 0),(4 2),(0 2))'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "now",
    Help( "now", tr( "function" ), tr( "Returns the current date and time." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "now" ), tr( "Returns the current date and time." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "now()" ), tr( "2012-07-22T13:24:57" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "num_geometries",
    Help( "num_geometries", tr( "function" ), tr( "Returns the number of geometries in a geometry collection, or null if the input geometry is not a collection." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "num_geometries" ), tr( "Returns the number of geometries in a geometry collection, or null if the input geometry is not a collection." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry collection" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "num_geometries(geom_from_wkt('GEOMETRYCOLLECTION(POINT(0 1), POINT(0 0), POINT(1 0), POINT(1 1))'))'),3))" ), tr( "4" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "num_interior_rings",
    Help( "num_interior_rings", tr( "function" ), tr( "Returns the number of interior rings in a polygon or geometry collection, or null if the input geometry is not a polygon or collection." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "num_interior_rings" ), tr( "Returns the number of interior rings in a polygon or geometry collection, or null if the input geometry is not a polygon or collection." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "input geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "num_interior_rings(geom_from_wkt('POLYGON((-1 -1, 4 0, 4 2, 0 2, -1 -1),(-0.1 -0.1, 0.4 0, 0.4 0.2, 0 0.2, -0.1 -0.1))'))" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "num_points",
    Help( "num_points", tr( "function" ), tr( "Returns the number of vertices in a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "num_points" ), tr( "Returns the number of vertices in a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "num_points($geometry)" ), tr( "number of vertices in $geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "num_rings",
    Help( "num_rings", tr( "function" ), tr( "Returns the number of rings (including exterior rings) in a polygon or geometry collection, or null if the input geometry is not a polygon or collection." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "num_rings" ), tr( "Returns the number of rings (including exterior rings) in a polygon or geometry collection, or null if the input geometry is not a polygon or collection." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "input geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "num_rings(geom_from_wkt('POLYGON((-1 -1, 4 0, 4 2, 0 2, -1 -1),(-0.1 -0.1, 0.4 0, 0.4 0.2, 0 0.2, -0.1 -0.1))'))" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "*",
    Help( "*", tr( "operator" ), tr( "Multiplication of two values" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "*" ), tr( "Multiplication of two values" ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 * 4" ), tr( "20" ), tr( "") )
            << HelpExample( tr( "5 * NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "||",
    Help( "||", tr( "operator" ), tr( "Joins two values together into a string.<br><br>If one of the values is NULL the result will be NULL. See the CONCAT function for a different behavior." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "||" ), tr( "Joins two values together into a string.<br><br>If one of the values is NULL the result will be NULL. See the CONCAT function for a different behavior." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "'Here' || ' and ' || 'there'" ), tr( "'Here and there'" ), tr( "") )
            << HelpExample( tr( "'Nothing' || NULL" ), tr( "NULL" ), tr( "") )
            << HelpExample( tr( "'Dia: ' || \"Diameter\"" ), tr( "'Dia: 25'" ), tr( "") )
            << HelpExample( tr( "1 || 2" ), tr( "'12'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "/",
    Help( "/", tr( "operator" ), tr( "Division of two values" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "/" ), tr( "Division of two values" ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 / 4" ), tr( "1.25" ), tr( "") )
            << HelpExample( tr( "5 / NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "=",
    Help( "=", tr( "operator" ), tr( "Compares two values and evaluates to 1 if they are equal." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "=" ), tr( "Compares two values and evaluates to 1 if they are equal." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 = 4" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 = 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "5 = NULL" ), tr( "NULL" ), tr( "") )
            << HelpExample( tr( "NULL = NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "^",
    Help( "^", tr( "operator" ), tr( "Power of two values." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "^" ), tr( "Power of two values." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 ^ 4" ), tr( "625" ), tr( "") )
            << HelpExample( tr( "5 ^ NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( ">=",
    Help( ">=", tr( "operator" ), tr( "Compares two values and evaluates to 1 if the left value is greater or equal than the right value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( ">=" ), tr( "Compares two values and evaluates to 1 if the left value is greater or equal than the right value." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 &gt;= 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "5 &gt;= 5" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 &gt;= 5" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( ">",
    Help( ">", tr( "operator" ), tr( "Compares two values and evaluates to 1 if the left value is greater than the right value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( ">" ), tr( "Compares two values and evaluates to 1 if the left value is greater than the right value." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 &gt; 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "5 &gt; 5" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 &gt; 5" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "<=",
    Help( "<=", tr( "operator" ), tr( "Compares two values and evaluates to 1 if the left value is less or equal than the right value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "<=" ), tr( "Compares two values and evaluates to 1 if the left value is less or equal than the right value." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 &lt;= 4" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "5 &lt;= 5" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 &lt;= 5" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "<",
    Help( "<", tr( "operator" ), tr( "Compares two values and evaluates to 1 if the left value is less than the right value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "<" ), tr( "Compares two values and evaluates to 1 if the left value is less than the right value." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 &lt; 4" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "5 &lt; 5" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "4 &lt; 5" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "-",
    Help( "-", tr( "operator" ), tr( "Subtraction of two values. If one of the values is NULL the result will be NULL." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "-" ), tr( "Subtraction of two values. If one of the values is NULL the result will be NULL." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 - 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "5 - NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "%",
    Help( "%", tr( "operator" ), tr( "Remainder of division" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "%" ), tr( "Remainder of division" ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 % 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "5 % NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "<>",
    Help( "<>", tr( "operator" ), tr( "Compares two values and evaluates to 1 if they are not equal." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "<>" ), tr( "Compares two values and evaluates to 1 if they are not equal." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 &lt;&gt; 4" ), tr( "1" ), tr( "") )
            << HelpExample( tr( "4 &lt;&gt; 4" ), tr( "0" ), tr( "") )
            << HelpExample( tr( "5 &lt;&gt; NULL" ), tr( "NULL" ), tr( "") )
            << HelpExample( tr( "NULL &lt;&gt; NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "+",
    Help( "+", tr( "operator" ), tr( "Addition of two values. If one of the values is NULL the result will be NULL." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "+" ), tr( "Addition of two values. If one of the values is NULL the result will be NULL." ),
          QList<HelpArg>()
              << HelpArg( tr( "a" ), tr( "value" ), false, false )
              << HelpArg( tr( "b" ), tr( "value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "5 + 4" ), tr( "9" ), tr( "") )
            << HelpExample( tr( "5 + NULL" ), tr( "NULL" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "order_parts",
    Help( "order_parts", tr( "function" ), tr( "Orders the parts of a MultiGeometry by a given criteria" ),
      QList<HelpVariant>()
        << HelpVariant( tr( "order_parts" ), tr( "Orders the parts of a MultiGeometry by a given criteria" ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a multi-type geometry" ), false, false )
              << HelpArg( tr( "orderby" ), tr( "an expression string defining the order criteria" ), false, false )
              << HelpArg( tr( "ascending" ), tr( "boolean, True for ascending, False for descending" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "order_parts(geom_from_wkt('MultiPolygon (((1 1, 5 1, 5 5, 1 5, 1 1)),((1 1, 9 1, 9 9, 1 9, 1 1)))'), 'area($geometry)', False)" ), tr( "MultiPolygon (((1 1, 9 1, 9 9, 1 9, 1 1)),((1 1, 5 1, 5 5, 1 5, 1 1)))" ), tr( "") )
            << HelpExample( tr( "order_parts(geom_from_wkt('LineString(1 2, 3 2, 4 3)'), '1', True)" ), tr( "LineString(1 2, 3 2, 4 3)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "overlaps",
    Help( "overlaps", tr( "function" ), tr( "Tests whether a geometry overlaps another. Returns true if the geometries share space, are of the same dimension, but are not completely contained by each other." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "overlaps" ), tr( "Tests whether a geometry overlaps another. Returns true if the geometries share space, are of the same dimension, but are not completely contained by each other." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "overlaps( geom_from_wkt( 'LINESTRING(3 5, 4 4, 5 5, 5 3)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "overlaps( geom_from_wkt( 'LINESTRING(0 0, 1 1)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "perimeter",
    Help( "perimeter", tr( "function" ), tr( "Returns the perimeter of a geometry polygon object. Calculations are always planimetric in the Spatial Reference System (SRS) of this geometry, and the units of the returned perimeter will match the units for the SRS. This differs from the calculations performed by the $perimeter function, which will perform ellipsoidal calculations based on the project's ellipsoid and distance unit settings." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "perimeter" ), tr( "Returns the perimeter of a geometry polygon object. Calculations are always planimetric in the Spatial Reference System (SRS) of this geometry, and the units of the returned perimeter will match the units for the SRS. This differs from the calculations performed by the $perimeter function, which will perform ellipsoidal calculations based on the project's ellipsoid and distance unit settings." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "polygon geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "perimeter(geom_from_wkt('POLYGON((0 0, 4 0, 4 2, 0 2, 0 0))'))" ), tr( "12.0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "pi",
    Help( "pi", tr( "function" ), tr( "Returns value of pi for calculations." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "pi" ), tr( "Returns value of pi for calculations." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "pi()" ), tr( "3.14159265358979" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "point_n",
    Help( "point_n", tr( "function" ), tr( "Returns a specific node from a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "point_n" ), tr( "Returns a specific node from a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry object" ), false, false )
              << HelpArg( tr( "index" ), tr( "index of node to return, where 1 is the first node" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(point_n(geom_from_wkt('POLYGON((0 0, 4 0, 4 2, 0 2, 0 0))'),2))" ), tr( "'Point (4 0)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "point_on_surface",
    Help( "point_on_surface", tr( "function" ), tr( "Returns a point guaranteed to lie on the surface of a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "point_on_surface" ), tr( "Returns a point guaranteed to lie on the surface of a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "point_on_surface($geometry)" ), tr( "a point geometry" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "project_color",
    Help( "project_color", tr( "function" ), tr( "Returns a color from the project's color scheme." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "project_color" ), tr( "Returns a color from the project's color scheme." ),
          QList<HelpArg>()
              << HelpArg( tr( "name" ), tr( "a color name" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "project_color('Logo color')" ), tr( "20,140,50" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "radians",
    Help( "radians", tr( "function" ), tr( "Converts from degrees to radians." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "radians" ), tr( "Converts from degrees to radians." ),
          QList<HelpArg>()
              << HelpArg( tr( "degrees" ), tr( "numeric value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "radians(180)" ), tr( "3.14159" ), tr( "") )
            << HelpExample( tr( "radians(57.2958)" ), tr( "1" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "ramp_color",
    Help( "ramp_color", tr( "function" ), tr( "Returns a string representing a color from a color ramp." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "ramp_color" ), tr( "Returns a string representing a color from a color ramp." ),
          QList<HelpArg>()
              << HelpArg( tr( "ramp_name" ), tr( "the name of the color ramp as a string, for example 'Spectral'" ), false, false )
              << HelpArg( tr( "value" ), tr( "the position on the ramp to select the color from as a real number between 0 and 1" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "ramp_color('Spectral',0.3)" ), tr( "'253,190,115,255'" ), tr( "") ),
      tr( "The color ramps available vary between QGIS installations. This function may not give the expected results if you move your QGIS project between installations." )
       )
      )
    );

  gFunctionHelpTexts.insert( "rand",
    Help( "rand", tr( "function" ), tr( "Returns a random integer within the range specified by the minimum and maximum argument (inclusive)." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "rand" ), tr( "Returns a random integer within the range specified by the minimum and maximum argument (inclusive)." ),
          QList<HelpArg>()
              << HelpArg( tr( "min" ), tr( "an integer representing the smallest possible random number desired" ), false, false )
              << HelpArg( tr( "max" ), tr( "an integer representing the largest possible random number desired" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "rand(1, 10)" ), tr( "8" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "randf",
    Help( "randf", tr( "function" ), tr( "Returns a random float within the range specified by the minimum and maximum argument (inclusive)." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "randf" ), tr( "Returns a random float within the range specified by the minimum and maximum argument (inclusive)." ),
          QList<HelpArg>()
              << HelpArg( tr( "min" ), tr( "an float representing the smallest possible random number desired" ), false, false )
              << HelpArg( tr( "max" ), tr( "an float representing the largest possible random number desired" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "randf(1, 10)" ), tr( "4.59258286403147" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "regexp_match",
    Help( "regexp_match", tr( "function" ), tr( "Returns true if any part of a string matches the supplied regular expression." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "regexp_match" ), tr( "Returns true if any part of a string matches the supplied regular expression." ),
          QList<HelpArg>()
              << HelpArg( tr( "input_string" ), tr( "the string to test against the regular expression" ), false, false )
              << HelpArg( tr( "regex" ), tr( "The regular expression to test against. Backslash characters must be double escaped (eg \"\\s\" to match a white space character). Non-greedy regular expressions are not supported." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "regexp_match('QGIS ROCKS','\\sROCKS')" ), tr( "true" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "regexp_replace",
    Help( "regexp_replace", tr( "function" ), tr( "Returns a string with the supplied regular expression replaced." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "regexp_replace" ), tr( "Returns a string with the supplied regular expression replaced." ),
          QList<HelpArg>()
              << HelpArg( tr( "input_string" ), tr( "the string to replace matches in" ), false, false )
              << HelpArg( tr( "regex" ), tr( "The regular expression to replace. Backslash characters must be double escaped (eg \"\\s\" to match a white space character). Non-greedy regular expressions are not supported." ), false, false )
              << HelpArg( tr( "replacement" ), tr( "The string that will replace any matching occurrences of the supplied regular expression. Captured groups can be inserted into the replacement string using \\1, \\2, etc." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "regexp_replace('QGIS SHOULD ROCK','\\sSHOULD\\s',' DOES ')" ), tr( "'QGIS DOES ROCK'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "regexp_substr",
    Help( "regexp_substr", tr( "function" ), tr( "Returns the portion of a string which matches a supplied regular expression." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "regexp_substr" ), tr( "Returns the portion of a string which matches a supplied regular expression." ),
          QList<HelpArg>()
              << HelpArg( tr( "input_string" ), tr( "the string to find matches in" ), false, false )
              << HelpArg( tr( "regex" ), tr( "The regular expression to match against. Backslash characters must be double escaped (eg \"\\s\" to match a white space character). Non-greedy regular expressions are not supported." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "regexp_substr('abc123','(\\d+)')" ), tr( "'123'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "relate",
    Help( "relate", tr( "function" ), tr( "Tests the Dimensional Extended 9 Intersection Model (DE-9IM) representation of the relationship between two geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Relationship variant" ), tr( "Returns the Dimensional Extended 9 Intersection Model (DE-9IM) representation of the relationship between two geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "relate( geom_from_wkt( 'LINESTRING(40 40,120 120)' ), geom_from_wkt( 'LINESTRING(40 40,60 120)' ) )" ), tr( "'FF1F00102'" ), tr( "") )
       )
        << HelpVariant( tr( "Pattern match variant" ), tr( "Tests whether the DE-9IM relationship between two geometries matches a specified pattern." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "pattern" ), tr( "DE-9IM pattern to match" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "relate( geom_from_wkt( 'LINESTRING(40 40,120 120)' ), geom_from_wkt( 'LINESTRING(40 40,60 120)' ), '**1F001**' )" ), tr( "True" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "replace",
    Help( "replace", tr( "function" ), tr( "Returns a string with the the supplied string replaced." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "replace" ), tr( "Returns a string with the the supplied string replaced." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "the input string" ), false, false )
              << HelpArg( tr( "before" ), tr( "the string to replace" ), false, false )
              << HelpArg( tr( "after" ), tr( "the string to use as a replacement" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "replace('QGIS SHOULD ROCK','SHOULD','DOES')" ), tr( "'QGIS DOES ROCK'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "reverse",
    Help( "reverse", tr( "function" ), tr( "Reverses the direction of a line string by reversing the order of its vertices." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "reverse" ), tr( "Reverses the direction of a line string by reversing the order of its vertices." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(reverse(geom_from_wkt('LINESTRING(0 0, 1 1, 2 2)')))" ), tr( "'LINESTRING(2 2, 1 1, 0 0)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "right",
    Help( "right", tr( "function" ), tr( "Returns a substring that contains the <i>n</i> rightmost characters of the string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "right" ), tr( "Returns a substring that contains the <i>n</i> rightmost characters of the string." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "a string" ), false, false )
              << HelpArg( tr( "length" ), tr( "integer. The number of characters from the right of the string to return." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "right('Hello World',5)" ), tr( "'World'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "round",
    Help( "round", tr( "function" ), tr( "Rounds a number to number of decimal places." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "round" ), tr( "Rounds a number to number of decimal places." ),
          QList<HelpArg>()
              << HelpArg( tr( "decimal" ), tr( "decimal number to be rounded" ), false, false )
              << HelpArg( tr( "places" ), tr( "Optional integer representing number of places to round decimals to. Can be negative." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "round(1234.567, 2)" ), tr( "1234.57" ), tr( "") )
            << HelpExample( tr( "round(1234.567)" ), tr( "1235" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "rpad",
    Help( "rpad", tr( "function" ), tr( "Returns a string padded to supplied width using a fill character." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "rpad" ), tr( "Returns a string padded to supplied width using a fill character." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to pad" ), false, false )
              << HelpArg( tr( "width" ), tr( "length of new string" ), false, false )
              << HelpArg( tr( "fill" ), tr( "character to pad the remaining space with" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "rpad('Hello', 10, 'x')" ), tr( "'Helloxxxxx'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "scale_exp",
    Help( "scale_exp", tr( "function" ), tr( "Transforms a given value from an input domain to an output range using an exponential curve. This function can be used to ease values in or out of the specified output range." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "scale_exp" ), tr( "Transforms a given value from an input domain to an output range using an exponential curve. This function can be used to ease values in or out of the specified output range." ),
          QList<HelpArg>()
              << HelpArg( tr( "val" ), tr( "A value in the input domain. The function will return a corresponding scaled value in the output range." ), false, false )
              << HelpArg( tr( "domain_min" ), tr( "Specifies the minimum value in the input domain, the smallest value the input value should take." ), false, false )
              << HelpArg( tr( "domain_max" ), tr( "Specifies the maximum value in the input domain, the largest value the input value should take." ), false, false )
              << HelpArg( tr( "range_min" ), tr( "Specifies the minimum value in the output range, the smallest value which should be output by the function." ), false, false )
              << HelpArg( tr( "range_max" ), tr( "Specifies the maximum value in the output range, the largest value which should be output by the function." ), false, false )
              << HelpArg( tr( "exponent" ), tr( "A positive value (greater than 0), which dictates the way input values are mapped to the output range. Large exponents will cause the output values to 'ease in', starting slowly before accelerating as the input values approach the domain maximum. Smaller exponents (less than 1) will cause output values to 'ease out', where the mapping starts quickly but slows as it approaches the domain maximum." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "scale_exp(5,0,10,0,100,2)" ), tr( "25" ), tr( "easing in, using an exponent of 2") )
            << HelpExample( tr( "scale_exp(3,0,10,0,100,0.5)" ), tr( "54.772" ), tr( "easing out, using an exponent of 0.5") )
       )
      )
    );

  gFunctionHelpTexts.insert( "scale_linear",
    Help( "scale_linear", tr( "function" ), tr( "Transforms a given value from an input domain to an output range using linear interpolation." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "scale_linear" ), tr( "Transforms a given value from an input domain to an output range using linear interpolation." ),
          QList<HelpArg>()
              << HelpArg( tr( "val" ), tr( "A value in the input domain. The function will return a corresponding scaled value in the output range." ), false, false )
              << HelpArg( tr( "domain_min" ), tr( "Specifies the minimum value in the input domain, the smallest value the input value should take." ), false, false )
              << HelpArg( tr( "domain_max" ), tr( "Specifies the maximum value in the input domain, the largest value the input value should take." ), false, false )
              << HelpArg( tr( "range_min" ), tr( "Specifies the minimum value in the output range, the smallest value which should be output by the function." ), false, false )
              << HelpArg( tr( "range_max" ), tr( "Specifies the maximum value in the output range, the largest value which should be output by the function." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "scale_linear(5,0,10,0,100)" ), tr( "72" ), tr( "") )
            << HelpExample( tr( "scale_linear(0.2,0,1,0,360)" ), tr( "72" ), tr( "scaling a value between 0 and 1 to an angle between 0 and 360") )
            << HelpExample( tr( "scale_linear(1500,1000,10000,9,20)" ), tr( "10.22" ), tr( "scaling a population which varies between 1000 and 10000 to a font size between 9 and 20") )
       )
      )
    );

  gFunctionHelpTexts.insert( "second",
    Help( "second", tr( "function" ), tr( "Extract the seconds part from a datetime or time, or the number of seconds from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Time variant" ), tr( "Extract the seconds part from a time or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "datetime" ), tr( "a time or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "second('2012-07-22T13:24:57')" ), tr( "57" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in seconds of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of seconds from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "second(age('2012-07-22T00:20:00','2012-07-22T00:00:00'))" ), tr( "1200" ), tr( "") )
            << HelpExample( tr( "second(age('2012-01-01','2010-01-01'))" ), tr( "63072000" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "segments_to_lines",
    Help( "segments_to_lines", tr( "function" ), tr( "Returns a multi line geometry consisting of a line for every segment in the input geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "segments_to_lines" ), tr( "Returns a multi line geometry consisting of a line for every segment in the input geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(segments_to_lines(geom_from_wkt('LINESTRING(0 0, 1 1, 2 2)')))" ), tr( "'MultiLineString ((0 0, 1 1),(1 1, 2 2))'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "set_color_part",
    Help( "set_color_part", tr( "function" ), tr( "Sets a specific color component for a color string, eg the red component or alpha component." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "set_color_part" ), tr( "Sets a specific color component for a color string, eg the red component or alpha component." ),
          QList<HelpArg>()
              << HelpArg( tr( "color" ), tr( "a color string" ), false, false )
              << HelpArg( tr( "component" ), tr( "a string corresponding to the color component to set. Valid options are:<br /><ul><li>red: RGB red component (0-255)</li><li>green: RGB green component (0-255)</li><li>blue: RGB blue component (0-255)</li><li>alpha: alpha (transparency) value (0-255)</li><li>hue: HSV hue (0-360)</li><li>saturation: HSV saturation (0-100)</li><li>value: HSV value (0-100)</li><li>hsl_hue: HSL hue (0-360)</li><li>hsl_saturation: HSL saturation (0-100)</li><li>lightness: HSL lightness (0-100)</li><li>cyan: CMYK cyan component (0-100)</li><li>magenta: CMYK magenta component (0-100)</li><li>yellow: CMYK yellow component (0-100)</li> <li>black: CMYK black component (0-100)</li></ul>" ), false, false )
              << HelpArg( tr( "value" ), tr( "new value for color component, respecting the ranges listed above" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "set_color_part('200,10,30','green',50)" ), tr( "200,50,30" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "shortest_line",
    Help( "shortest_line", tr( "function" ), tr( "Returns the shortest line joining geometry 1 to geometry 2. The resultant line will start at geometry 1 and end at geometry 2." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "shortest_line" ), tr( "Returns the shortest line joining geometry 1 to geometry 2. The resultant line will start at geometry 1 and end at geometry 2." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry 1" ), tr( "geometry to find shortest line from" ), false, false )
              << HelpArg( tr( "geometry 2" ), tr( "geometry to find shortest line to" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(shortest_line(geom_from_wkt('LINESTRING (20 80, 98 190, 110 180, 50 75 )'),geom_from_wkt('POINT(100 100)')))" ), tr( "LineString(73.0769 115.384, 100 100)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "sin",
    Help( "sin", tr( "function" ), tr( "Returns the sine of an angle." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "sin" ), tr( "Returns the sine of an angle." ),
          QList<HelpArg>()
              << HelpArg( tr( "angle" ), tr( "angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "sin(1.571)" ), tr( "0.999999682931835" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "soundex",
    Help( "soundex", tr( "function" ), tr( "Returns the Soundex representation of a string. Soundex is a phonetic matching algorithm, so strings with similar sounds should be represented by the same Soundex code." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "soundex" ), tr( "Returns the Soundex representation of a string. Soundex is a phonetic matching algorithm, so strings with similar sounds should be represented by the same Soundex code." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "a string" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "soundex('robert')" ), tr( "'R163'" ), tr( "") )
            << HelpExample( tr( "soundex('rupert')" ), tr( "'R163'" ), tr( "") )
            << HelpExample( tr( "soundex('rubin')" ), tr( "'R150'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "sqrt",
    Help( "sqrt", tr( "function" ), tr( "Returns square root of a value." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "sqrt" ), tr( "Returns square root of a value." ),
          QList<HelpArg>()
              << HelpArg( tr( "value" ), tr( "a number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "sqrt(9)" ), tr( "3" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "start_point",
    Help( "start_point", tr( "function" ), tr( "Returns the first node from a geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "start_point" ), tr( "Returns the first node from a geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry" ), tr( "geometry object" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt(start_point(geom_from_wkt('LINESTRING(4 0, 4 2, 0 2)')))" ), tr( "'Point (4 0)'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "strpos",
    Help( "strpos", tr( "function" ), tr( "Return the first matching position of a substring within another string, or 0 if the substring is not found." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "strpos" ), tr( "Return the first matching position of a substring within another string, or 0 if the substring is not found." ),
          QList<HelpArg>()
              << HelpArg( tr( "haystack" ), tr( "string that is to be searched" ), false, false )
              << HelpArg( tr( "needle" ), tr( "string to search for" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "strpos('HELLO WORLD','WORLD')" ), tr( "7" ), tr( "") )
            << HelpExample( tr( "strpos('HELLO WORLD','GOODBYE')" ), tr( "0" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "substr",
    Help( "substr", tr( "function" ), tr( "Returns a part of a string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "substr" ), tr( "Returns a part of a string." ),
          QList<HelpArg>()
              << HelpArg( tr( "input_string" ), tr( "the full input string" ), false, false )
              << HelpArg( tr( "startpos" ), tr( "integer representing start position to extract from" ), false, false )
              << HelpArg( tr( "length" ), tr( "integer representing length of string to extract" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "substr('HELLO WORLD',3,5)" ), tr( "'LLO W'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "sym_difference",
    Help( "sym_difference", tr( "function" ), tr( "Returns a geometry that represents the portions of two geometries that do not intersect." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "sym_difference" ), tr( "Returns a geometry that represents the portions of two geometries that do not intersect." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry1" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry2" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( sym_difference( geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ), geom_from_wkt( 'LINESTRING(3 3, 8 8)' ) ) )" ), tr( "LINESTRING(5 5, 8 8)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "tan",
    Help( "tan", tr( "function" ), tr( "Returns the tangent of an angle." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "tan" ), tr( "Returns the tangent of an angle." ),
          QList<HelpArg>()
              << HelpArg( tr( "angle" ), tr( "angle in radians" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "tan(1.0)" ), tr( "1.5574077246549" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "title",
    Help( "title", tr( "function" ), tr( "Converts all words of a string to title case (all words lower case with leading capital letter)." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "title" ), tr( "Converts all words of a string to title case (all words lower case with leading capital letter)." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "the string to convert to title case" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "title('hello WOrld')" ), tr( "'Hello World'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_date",
    Help( "to_date", tr( "function" ), tr( "Convert a string into a date object." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_date" ), tr( "Convert a string into a date object." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string representing a date value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_date('2012-05-04')" ), tr( "2012-05-04" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_datetime",
    Help( "to_datetime", tr( "function" ), tr( "Convert a string into a datetime object." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_datetime" ), tr( "Convert a string into a datetime object." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string representing a datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_datetime('2012-05-04 12:50:00')" ), tr( "2012-05-04T12:50:00" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_int",
    Help( "to_int", tr( "function" ), tr( "Converts a string to integer number. Nothing is returned if a value cannot be converted to integer (e.g '123asd' is invalid)." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_int" ), tr( "Converts a string to integer number. Nothing is returned if a value cannot be converted to integer (e.g '123asd' is invalid)." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to convert to integer number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_int('123')" ), tr( "123" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_interval",
    Help( "to_interval", tr( "function" ), tr( "Converts a string to a interval type.  Can be used to take days, hours, month, etc of a date." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_interval" ), tr( "Converts a string to a interval type.  Can be used to take days, hours, month, etc of a date." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "a string representing an interval. Allowable formats include {n} days {n} hours {n} months." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_datetime('2012-05-05 12:00:00') - to_interval('1 day 2 hours')" ), tr( "2012-05-04T10:00:00" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_real",
    Help( "to_real", tr( "function" ), tr( "Converts a string to a real number. Nothing is returned if a value cannot be converted to real (e.g '123.56asd' is invalid).  Numbers are rounded after saving changes if the precision is smaller than the result of the conversion." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_real" ), tr( "Converts a string to a real number. Nothing is returned if a value cannot be converted to real (e.g '123.56asd' is invalid).  Numbers are rounded after saving changes if the precision is smaller than the result of the conversion." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to convert to real number" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_real('123.45')" ), tr( "123.45" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_string",
    Help( "to_string", tr( "function" ), tr( "Converts a number to string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_string" ), tr( "Converts a number to string." ),
          QList<HelpArg>()
              << HelpArg( tr( "number" ), tr( "Integer or real value. The number to convert to string." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_string(123)" ), tr( "'123'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "to_time",
    Help( "to_time", tr( "function" ), tr( "Convert a string into a time object." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "to_time" ), tr( "Convert a string into a time object." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string representing a time value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "to_time('12:30:01')" ), tr( "12:30:01" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "touches",
    Help( "touches", tr( "function" ), tr( "Tests whether a geometry touches another. Returns true if the geometries have at least one point in common, but their interiors do not intersect." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "touches" ), tr( "Tests whether a geometry touches another. Returns true if the geometries have at least one point in common, but their interiors do not intersect." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "touches( geom_from_wkt( 'LINESTRING(5 3, 4 4)' ), geom_from_wkt( 'LINESTRING(3 3, 4 4, 5 5)' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "touches( geom_from_wkt( 'POINT(4 4)' ), geom_from_wkt( 'POINT(5 5)' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "transform",
    Help( "transform", tr( "function" ), tr( "Returns the geometry transformed from a source CRS to a destination CRS." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "transform" ), tr( "Returns the geometry transformed from a source CRS to a destination CRS." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "source_auth_id" ), tr( "the source auth CRS ID" ), false, false )
              << HelpArg( tr( "dest_auth_id" ), tr( "the destination auth CRS ID" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( transform( $geometry, 'EPSG:2154', 'EPSG:4326' ) )" ), tr( "POINT(0 51)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "translate",
    Help( "translate", tr( "function" ), tr( "Returns a translated version of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "translate" ), tr( "Returns a translated version of a geometry. Calculations are in the Spatial Reference System of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "dx" ), tr( "delta x" ), false, false )
              << HelpArg( tr( "dy" ), tr( "delta y" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "translate($geometry, 5, 10)" ), tr( "a geometry of the same type like the original one" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "trim",
    Help( "trim", tr( "function" ), tr( "Removes all leading and trailing whitespace (spaces, tabs, etc) from a string." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "trim" ), tr( "Removes all leading and trailing whitespace (spaces, tabs, etc) from a string." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "string to trim" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "trim('   hello world    ')" ), tr( "'hello world'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "union",
    Help( "union", tr( "function" ), tr( "Returns a geometry that represents the point set union of the geometries." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "union" ), tr( "Returns a geometry that represents the point set union of the geometries." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry1" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry2" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "geom_to_wkt( union( geom_from_wkt( 'POINT(4 4)' ), geom_from_wkt( 'POINT(5 5)' ) ) )" ), tr( "MULTIPOINT(4 4, 5 5)" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "upper",
    Help( "upper", tr( "function" ), tr( "Converts a string to upper case letters." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "upper" ), tr( "Converts a string to upper case letters." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "the string to convert to upper case" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "upper('hello WOrld')" ), tr( "'HELLO WORLD'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "uuid",
    Help( "uuid", tr( "function" ), tr( "Generates a Universally Unique Identifier (UUID) for each row using the Qt <a href='http://qt-project.org/doc/qt-4.8/quuid.html#createUuid'>QUuid::createUuid</a>  method.  Each UUID is 38 characters long." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "uuid" ), tr( "Generates a Universally Unique Identifier (UUID) for each row using the Qt <a href='http://qt-project.org/doc/qt-4.8/quuid.html#createUuid'>QUuid::createUuid</a>  method.  Each UUID is 38 characters long." ),
          QList<HelpArg>(),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "uuid()" ), tr( "'{0bd2f60f-f157-4a6d-96af-d4ba4cb366a1}'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "var",
    Help( "var", tr( "function" ), tr( "Returns the value stored within a specified variable." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "var" ), tr( "Returns the value stored within a specified variable." ),
          QList<HelpArg>()
              << HelpArg( tr( "name" ), tr( "a variable name" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "var('qgis_version')" ), tr( "'2.12'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "week",
    Help( "week", tr( "function" ), tr( "Extract the week number from a date, or the number of weeks from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Date variant" ), tr( "Extract the week number from a date or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "date" ), tr( "a date or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "week('2012-05-12')" ), tr( "19" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in weeks of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of months from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "week(tointerval('3 weeks'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "week(age('2012-01-01','2010-01-01'))" ), tr( "104.285" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "within",
    Help( "within", tr( "function" ), tr( "Tests whether a geometry is within another. Returns true if the geometry a is completely within geometry b." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "within" ), tr( "Tests whether a geometry is within another. Returns true if the geometry a is completely within geometry b." ),
          QList<HelpArg>()
              << HelpArg( tr( "geometry a" ), tr( "a geometry" ), false, false )
              << HelpArg( tr( "geometry b" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "within( geom_from_wkt( 'POINT( 0.5 0.5)' ), geom_from_wkt( 'POLYGON((0 0, 0 1, 1 1, 1 0, 0 0))' ) )" ), tr( "true" ), tr( "") )
            << HelpExample( tr( "within( geom_from_wkt( 'POINT( 5 5 )' ), geom_from_wkt( 'POLYGON((0 0, 0 1, 1 1, 1 0, 0 0 ))' ) )" ), tr( "false" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "wordwrap",
    Help( "wordwrap", tr( "function" ), tr( "Returns a string wrapped to a maximum/minimum number of characters." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "wordwrap" ), tr( "Returns a string wrapped to a maximum/minimum number of characters." ),
          QList<HelpArg>()
              << HelpArg( tr( "string" ), tr( "the string to be wrapped" ), false, false )
              << HelpArg( tr( "wrap_length" ), tr( "an integer. If wrap_length is positive the number represents the ideal maximum number of characters to wrap; if negative, the number represents the minimum number of characters to wrap." ), false, false )
              << HelpArg( tr( "delimiter_string" ), tr( "the delimiter string to wrap to a new line (optional)." ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "wordwrap('UNIVERSITY OF QGIS',13)" ), tr( "'UNIVERSITY OF<br>QGIS'" ), tr( "") )
            << HelpExample( tr( "wordwrap('UNIVERSITY OF QGIS',-3)" ), tr( "'UNIVERSITY<br>OF QGIS'" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "x",
    Help( "x", tr( "function" ), tr( "Returns the x coordinate of a point geometry, or the x-coordinate of the centroid for a non-point geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "x" ), tr( "Returns the x coordinate of a point geometry, or the x-coordinate of the centroid for a non-point geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "x( geom_from_wkt( 'POINT(2 5)' ) )" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "x_max",
    Help( "x_max", tr( "function" ), tr( "Returns the maximum x coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "x_max" ), tr( "Returns the maximum x coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "x_max( geom_from_wkt( 'LINESTRING(2 5, 3 6, 4 8)') )" ), tr( "4" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "x_min",
    Help( "x_min", tr( "function" ), tr( "Returns the minimum x coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "x_min" ), tr( "Returns the minimum x coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "x_min( geom_from_wkt( 'LINESTRING(2 5, 3 6, 4 8)') )" ), tr( "2" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "y",
    Help( "y", tr( "function" ), tr( "Returns the y coordinate of a point geometry, or the y-coordinate of the centroid for a non-point geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "y" ), tr( "Returns the y coordinate of a point geometry, or the y-coordinate of the centroid for a non-point geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "y( geom_from_wkt( 'POINT(2 5)' ) )" ), tr( "5" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "y_max",
    Help( "y_max", tr( "function" ), tr( "Returns the maximum y coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "y_max" ), tr( "Returns the maximum y coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "y_max( geom_from_wkt( 'LINESTRING(2 5, 3 6, 4 8)') )" ), tr( "8" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "y_min",
    Help( "y_min", tr( "function" ), tr( "Returns the minimum y coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "y_min" ), tr( "Returns the minimum y coordinate of a geometry. Calculations are in the spatial reference system of this geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "y_min( geom_from_wkt( 'LINESTRING(2 5, 3 6, 4 8)') )" ), tr( "5" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "year",
    Help( "year", tr( "function" ), tr( "Extract the year part from a date, or the number of years from an interval." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "Date variant" ), tr( "Extract the year part from a date or datetime." ),
          QList<HelpArg>()
              << HelpArg( tr( "date" ), tr( "a date or datetime value" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "year('2012-05-12')" ), tr( "2012" ), tr( "") )
       )
        << HelpVariant( tr( "Interval variant" ), tr( "Calculate the length in years of an interval." ),
          QList<HelpArg>()
              << HelpArg( tr( "interval" ), tr( "interval value to return number of years from" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "year(to_interval('3 years'))" ), tr( "3" ), tr( "") )
            << HelpExample( tr( "year(age('2012-01-01','2010-01-01'))" ), tr( "1.9986" ), tr( "") )
       )
      )
    );

  gFunctionHelpTexts.insert( "z",
    Help( "z", tr( "function" ), tr( "Returns the z coordinate of a point geometry." ),
      QList<HelpVariant>()
        << HelpVariant( tr( "z" ), tr( "Returns the z coordinate of a point geometry." ),
          QList<HelpArg>()
              << HelpArg( tr( "geom" ), tr( "a point geometry" ), false, false ),
          /* variableLenArguments */ false,
          QList<HelpExample>()
            << HelpExample( tr( "z( geom_from_wkt( 'POINTZ(2 5 7)' ) )" ), tr( "7" ), tr( "") )
       )
      )
    );
}
