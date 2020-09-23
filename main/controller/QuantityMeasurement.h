#include <iostream>

class QuantityMeasurement
{
    public:

    enum class QuantityBaseValue {INCH, FEET, YARD};

    double INCH = 1;
    double FEET = 12;
    double YARD = 36;

    double convertToBase(double, double);
};