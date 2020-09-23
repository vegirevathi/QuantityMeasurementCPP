#ifndef UNITVALUE_H
#define UNITVALUE_H

#include <iostream>
#include "../model/UnitType.h"

class UnitValue
{
    public:

    double value;

    static const UnitValue INCH;
    static const UnitValue FEET;
    static const UnitValue YARD;
    static const UnitValue CENTIMETER;
    static const UnitValue GALLON;
    static const UnitValue LITRE;
    static const UnitValue MILLILITRE;
    static const UnitValue GRAM;
    static const UnitValue KILOGRAM;
    static const UnitValue TONNE;
    static const UnitValue CELSIUS;
    static const UnitValue FAHRENHEIT;

    UnitType unitType;

    UnitValue(double, UnitType);

    UnitValue();

};

#endif