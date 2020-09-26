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

QuantityMeasurement::QuantityMeasurement(double value, UnitValue unit) {
    this->value = value;
    this->unitValue = unit;
}

QuantityMeasurement::QuantityMeasurement() {};

bool QuantityMeasurement::operator==(QuantityMeasurement that) const
    {
        if ((this->value == that.value) && (this->unitValue.unitType == that.unitValue.unitType)) {
            return true;
        }
        return false;
    }

bool QuantityMeasurement::operator==(QuantityMeasurement *that) const
    {
        if(that == nullptr) {
            return false;
        }
      return (*this == *that);
    }
