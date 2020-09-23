#include <iostream>
#include "../model/UnitValue.h"

class QuantityMeasurement
{
    public:

    UnitValue unitValue;

    double convertToBaseValue(double, UnitValue);
 
    double addingTwoUnits(double, double);

};