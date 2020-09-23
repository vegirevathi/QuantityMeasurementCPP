#include "../controller/QuantityMeasurement.h"

double QuantityMeasurement::addingTwoUnits(double unit1, double unit2) {
    return unit1 + unit2;
}

double QuantityMeasurement::convertToBaseValue(double value, UnitValue unit) {
    return value * unit.value;
}

double QuantityMeasurement::temperatureConversion(double value, UnitValue unit, double conversionFactor) {
    return (value * unit.value) + conversionFactor;
}