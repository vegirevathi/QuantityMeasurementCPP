#include "../model/Length.h"

    Length::Length() {}

    Length::Length(double value, int units) {
        this->value = value;
        this->units = units;
    }

    Length::Length(double value, UnitValue unitValue) {
        this->value = value;
        this->unitValue = unitValue;
    }

    bool Length::operator==(Length that) const
    {
        if (this->value == that.value) {
            if (this->units == that.units) {
                return true;
            }
        }
        return false;
    }

    bool Length::operator==(Length *that) const
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
