#include <iostream>

class Inch {
    double value;

    public:
    Inch(double);

    bool operator==(Inch) const;

    bool operator==(Inch *) const;
};