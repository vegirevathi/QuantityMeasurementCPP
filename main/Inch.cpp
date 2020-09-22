#include "Inch.h"

Inch::Inch(double value) {
    this->value = value;
}

bool Inch::operator==(Inch that) const
{
    return (this->value == that.value);
}