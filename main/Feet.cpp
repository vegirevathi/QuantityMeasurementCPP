#include "Feet.h"

Feet::Feet(double value) {
    this->value = value;
}

bool Feet::operator==(Feet that) const
{
    return (this->value == that.value);
}

bool Feet::operator==(Feet *that) const
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
