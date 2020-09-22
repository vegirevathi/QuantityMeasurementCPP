#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.h"
#include "../main/Feet.h"
 
TEST(feetToInchCompare, given_one_feet_and_twelve_inch_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double feet = 1.0;
        double inches = quantityMeasurement.feetToInchConverter(feet);
        ASSERT_EQ(12, inches);
    }

TEST(feetTofeetCompare, given_zero_feet_and_zero_feet_should_return_equal)
    {
        Feet feet1(0);
        Feet feet2(0);
        ASSERT_EQ(feet1, feet2);
    }
   
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }