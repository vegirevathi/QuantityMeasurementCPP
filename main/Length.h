#include <iostream>

class Length {

    public:
    Length();

    enum class UnitType {INCHES, FEETS};

    int INCHES = 1;
    int FEETS = 2;

    double value;
    int units;

    Length(double, int);

    bool operator==(Length) const;

    bool operator==(Length *) const;
};