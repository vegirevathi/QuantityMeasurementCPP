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
const UnitValue UnitValue::GRAM(0.001, UnitType::WEIGHT);
const UnitValue UnitValue::KILOGRAM(1, UnitType::WEIGHT);
const UnitValue UnitValue::TONNE(1000, UnitType::WEIGHT);
const UnitValue UnitValue::CELSIUS(1.8, UnitType::TEMPERATURE);
const UnitValue UnitValue::FAHRENHEIT(1, UnitType::TEMPERATURE);

