#include "Inch.h"

Inch::Inch(double value) {
    this->value = value;
}

bool Inch::operator==(Inch that) const
{
    return (this->value == that.value);
}

bool Inch::operator==(Inch *that) const
{
    if(that == nullptr) {
        return false;
    }
    if(that == this) {
        return true;
    }
    if(that->value == this->value) {
        return true;
    }
   return false;
}