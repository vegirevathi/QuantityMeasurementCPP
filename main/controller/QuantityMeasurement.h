#include <iostream>
#include "../model/UnitValue.h"

class QuantityMeasurement
{
    public:

    UnitValue unitValue;
    double value;

    QuantityMeasurement(double, UnitValue);

    QuantityMeasurement();

    double convertToBaseValue(double, UnitValue);
 
    double addingTwoUnits(double, double);

    double temperatureConversion(double, UnitValue, double);

    bool operator==(QuantityMeasurement) const;

    bool operator==(QuantityMeasurement *) const;

};