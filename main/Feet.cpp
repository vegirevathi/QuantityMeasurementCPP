#include "Feet.h"

Feet::Feet(double value) {
    this->value = value;
}

bool Feet::operator==(Feet that) const
{
    return (this->value == that.value);
}