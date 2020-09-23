#include <iostream>

class QuantityMeasurement
{
    public:

    enum class QuantityBaseValue {INCH, FEET, YARD, CENTIMETRE};

    double INCH = 1;
    double FEET = 12;
    double YARD = 36;
    double CENTIMETRE = 0.4;

    double convertToBase(double, double);
};