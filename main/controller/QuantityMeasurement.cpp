#include "../controller/QuantityMeasurement.h"

double QuantityMeasurement::convertToBase(double value, double unit)
{
    return (unit * value);
}

double QuantityMeasurement::addingTwoUnits(double unit1, double unit2) {
    return unit1 + unit2;
}