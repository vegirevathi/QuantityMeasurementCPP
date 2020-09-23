#include <iostream>
#include "UnitValue.h"

class Length {

    public:
    Length();

    enum class UnitType {INCHES, FEETS};

    int INCHES;
    int FEETS;

    double value;
    int units;

    UnitValue unitValue;

    Length(double, UnitValue);

    Length(double, int);

    bool operator==(Length) const;

    bool operator==(Length *) const;
};