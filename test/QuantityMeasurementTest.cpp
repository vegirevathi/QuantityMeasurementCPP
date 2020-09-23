#include <gtest/gtest.h>
#include "../main/controller/QuantityMeasurement.h"
#include "../main/model/Length.h"
 
TEST(feetToInchCompare, given_one_feet_and_twelve_inch_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBase(1.0, quantityMeasurement.FEET);
        double result2 = quantityMeasurement.convertToBase(12.0, quantityMeasurement.INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(feetTofeetCompare, given_zero_feet_and_zero_feet_should_return_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        Length length2(0.0, length.FEETS);
        ASSERT_TRUE(length1 == length2);   
    }

TEST(feetTofeetCompare, given_zero_feet_and_null_value_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        ASSERT_FALSE(length1 == nullptr);
    }

TEST(feetTofeetCompare, given_zero_feet_and_one_feet_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        Length length2(1.0, length.FEETS);
        ASSERT_FALSE(length1 == length2);
    }
   
TEST(feetTofeetCompare, given_zero_feet_and_zero_feet_different_references_should_return_not_equal)
    {
        Length length1(0.0, length1.FEETS);
        Length length2(0.0, length2.FEETS);
        ASSERT_FALSE(length1 == length2);
    }

TEST(InchToInchCompare, given_zero_inch_and_zero_inch_should_return_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        Length length2(0.0, length.INCHES);
        ASSERT_TRUE(length1 == length2); 
    }

TEST(InchToInchCompare, given_zero_inch_and_null_value_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        ASSERT_FALSE(length1 == nullptr);
    }

TEST(InchToInchCompare, given_zero_inch_and_zero_inch_different_references_should_return_not_equal)
    {
        Length length1(0.0, length1.INCHES);
        Length length2(0.0, length2.INCHES);
        ASSERT_FALSE(length1 == length2);
    }

TEST(InchToInchCompare, given_zero_inch_and_one_inch_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        Length length2(1.0, length.INCHES);
        ASSERT_FALSE(length1 == length2);
    }

TEST(InchToInchCompare, given_zero_inch_and_one_inch_should_return_not_equal_testing)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        Length length2(0.0, length.INCHES);
        ASSERT_TRUE(length1 == length2);
    }

TEST(feetToInchCompare, given_three_feet_and_one_yard_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBase(3.0, quantityMeasurement.FEET);
        double result2 = quantityMeasurement.convertToBase(1.0, quantityMeasurement.YARD);
        ASSERT_EQ(result1, result2);
    }

TEST(feetToInchCompare, given_one_feet_and_one_yard_should_return_not_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBase(1.0, quantityMeasurement.FEET);
        double result2 = quantityMeasurement.convertToBase(1.0, quantityMeasurement.YARD);
        ASSERT_NE(result1, result2);
    }


int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }