#include "QuantityMeasurement.h"

double QuantityMeasurement::convertToBase(double value, double unit)
{
    return (unit * value);
}