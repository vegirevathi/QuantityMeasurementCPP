#include <gtest/gtest.h>
#include "../main/controller/QuantityMeasurement.h"
#include "../main/model/Length.h"
#include "../main/model/UnitValue.h"
 
TEST(LengthsComparison, given_one_feet_and_twelve_inch_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double result2 = quantityMeasurement.convertToBaseValue(12.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_zero_feet_and_zero_feet_should_return_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        Length length2(0.0, length.FEETS);
        ASSERT_TRUE(length1 == length2);   
    
    }

TEST(LengthsComparison, given_zero_feet_and_null_value_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        ASSERT_FALSE(length1 == nullptr);
    }

TEST(LengthsComparison, given_zero_feet_and_one_feet_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.FEETS);
        Length length2(1.0, length.FEETS);
        ASSERT_FALSE(length1 == length2);
    }
   
TEST(LengthsComparison, given_zero_feet_and_zero_feet_different_references_should_return_not_equal)
    {
        Length length1(0.0, length1.FEETS);
        Length length2(0.0, length2.FEETS);
        ASSERT_FALSE(length1 == length2);
    }

TEST(LengthsComparison, given_zero_inch_and_zero_inch_should_return_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        Length length2(0.0, length.INCHES);
        ASSERT_TRUE(length1 == length2); 
    }

TEST(LengthsComparison, given_zero_inch_and_null_value_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        ASSERT_FALSE(length1 == nullptr);
    }

TEST(LengthsComparison, given_zero_inch_and_zero_inch_different_references_should_return_not_equal)
    {
        Length length1(0.0, length1.INCHES);
        Length length2(0.0, length2.INCHES);
        ASSERT_FALSE(length1 == length2);
    }

TEST(LengthsComparison, given_zero_inch_and_one_inch_should_return_not_equal)
    {
        Length length;
        Length length1(0.0, length.INCHES);
        Length length2(1.0, length.INCHES);
        ASSERT_FALSE(length1 == length2);
    }

TEST(LengthsComparison, given_three_feet_and_one_yard_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(3.0, UnitValue::FEET);
        double result2 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_one_feet_and_one_yard_should_return_not_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double result2 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        ASSERT_NE(result1, result2);
    }

TEST(LengthsComparison, given_one_inch_and_one_yard_should_return_not_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::INCH);
        double result2 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        ASSERT_NE(result1, result2);
    }

TEST(LengthsComparison, given_one_yard_and_thirtySix_inches_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        double result2 = quantityMeasurement.convertToBaseValue(36.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_thirtySix_inches_and_one_yard_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(36.0, UnitValue::INCH);
        double result2 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_one_yard_and_three_feet_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::YARD);
        double result2 = quantityMeasurement.convertToBaseValue(3.0, UnitValue::FEET);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_two_inch_and_five_centimeters_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(2.0, UnitValue::INCH);
        double result2 = quantityMeasurement.convertToBaseValue(5.0, UnitValue::CENTIMETER);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_two_inch_and_two_inch_should_equal_four_inches) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(2.0, UnitValue::INCH);
        double value2 = quantityMeasurement.convertToBaseValue(2.0, UnitValue::INCH);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(4.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_one_feet_and_two_inches_should_equal_fourteen_inches) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double value2 = quantityMeasurement.convertToBaseValue(2.0, UnitValue::INCH);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(14.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_one_feet_and_one_feet_should_equal_twentyfour_inches) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double value2 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(24.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(LengthsComparison, given_two_inch_and_two_and_half_centimeters_should_equal_three_inches) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(2.0, UnitValue::INCH);
        double value2 = quantityMeasurement.convertToBaseValue(2.5, UnitValue::CENTIMETER);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(3.0, UnitValue::INCH);
        ASSERT_EQ(result1, result2);
    }

TEST(VolumeComparison, given_one_gallon_and_3dot78_litres_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::GALLON);
        double result2 = quantityMeasurement.convertToBaseValue(3.78, UnitValue::LITRE);
        ASSERT_EQ(result1, result2);
    }

TEST(VolumeComparison, given_one_litre_and_1000_millilitres_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::LITRE);
        double result2 = quantityMeasurement.convertToBaseValue(1000, UnitValue::MILLILITRE);
        ASSERT_EQ(result1, result2);
    }

TEST(VolumeComparison, given_one_gallon_and_3dot78_litres_should_equal_7dot57_litres) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::GALLON);
        double value2 = quantityMeasurement.convertToBaseValue(3.78, UnitValue::LITRE);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(7.57, UnitValue::LITRE);
        ASSERT_NEAR(result1, result2, 10);
    }

TEST(VolumeComparison, given_one_litre_and_1000_millilitres_should_equal_2_litres) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::LITRE);
        double value2 = quantityMeasurement.convertToBaseValue(1000, UnitValue::MILLILITRE);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(2, UnitValue::LITRE);
        ASSERT_EQ(result1, result2);
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }