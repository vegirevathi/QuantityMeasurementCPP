#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.h"
#include "../main/Feet.h"
#include "../main/Inch.h"
 
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

TEST(feetTofeetCompare, given_zero_feet_and_null_value_should_return_not_equal)
    {
        Feet feet1(0);
        ASSERT_FALSE(feet1 == nullptr);
    }

TEST(feetTofeetCompare, given_zero_feet_and_one_feet_should_return_not_equal)
    {
        Feet feet1(0);
        Feet feet2(1);
        ASSERT_FALSE(feet1 == feet2);
    }
   
TEST(feetTofeetCompare, given_zero_feet_and_zero_feet_different_types_should_return_equal)
    {
        Feet feet1(0);
        double feet2 = 0;
        ASSERT_TRUE(feet1 == feet2);
    }

TEST(InchToInchCompare, given_zero_inch_and_zero_inch_should_return_equal)
    {
        Inch inch1(0);
        Inch inch2(0);
        ASSERT_EQ(inch1, inch2);
    }

TEST(InchToInchCompare, given_zero_inch_and_null_value_should_return_not_equal)
    {
        Inch inch1(0);
        ASSERT_FALSE(inch1 == nullptr);
    }

TEST(InchToInchCompare, given_zero_inch_and_zero_inch_different_types_should_return_equal)
    {
        Feet feet1(0);
        double feet2 = 0;
        ASSERT_TRUE(feet1 == feet2);
    }

TEST(InchToInchCompare, given_zero_inch_and_one_inch_should_return_not_equal)
    {
        Inch inch1(0);
        Inch inch2(1);
        ASSERT_FALSE(inch1 == inch2);
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }