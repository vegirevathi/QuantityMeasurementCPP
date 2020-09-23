#include "../model/UnitValue.h"

UnitValue::UnitValue(){}

UnitValue::UnitValue(double value, UnitType unitType) {
    this->value = value;
    this->unitType = unitType;
}

const UnitValue UnitValue::INCH(1, UnitType::LENGTH);
const UnitValue UnitValue::FEET(12, UnitType::LENGTH);
const UnitValue UnitValue::YARD(36, UnitType::LENGTH);
const UnitValue UnitValue::CENTIMETER(0.4, UnitType::LENGTH);
const UnitValue UnitValue::MILLILITRE(1, UnitType::VOLUME);
const UnitValue UnitValue::LITRE(1000, UnitType::VOLUME);
const UnitValue UnitValue::GALLON(3780, UnitType::VOLUME);