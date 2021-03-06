#include <gtest/gtest.h>
#include "../main/controller/QuantityMeasurement.h"
#include "../main/model/UnitValue.h"
 
TEST(LengthsComparison, given_one_feet_and_twelve_inch_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::FEET);
        double result2 = quantityMeasurement.convertToBaseValue(12.0, UnitValue::INCH);
        ASSERT_TRUE(result1 == result2);
    }

TEST(LengthsComparison, given_zero_feet_and_zero_feet_should_return_equal)
    {   
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::FEET);
        QuantityMeasurement quantityMeasurement2(0.0, UnitValue::FEET);
        ASSERT_TRUE(quantityMeasurement1 == quantityMeasurement2);  
    }

TEST(LengthsComparison, given_zero_feet_and_null_value_should_return_not_equal)
    {
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::FEET);
        ASSERT_FALSE(quantityMeasurement1 == nullptr);
    }

TEST(LengthsComparison, given_zero_feet_and_one_feet_should_return_not_equal)
    {
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::FEET);
        QuantityMeasurement quantityMeasurement2(1.0, UnitValue::FEET);
        ASSERT_FALSE(quantityMeasurement1 == quantityMeasurement2);
    }
   
TEST(LengthsComparison, given_zero_feet_and_zero_feet_of_same_reference_should_return_equal)
    {
        QuantityMeasurement *zero_feet_first_ref = new QuantityMeasurement(0.0, UnitValue::FEET);
        QuantityMeasurement *zero_feet_second_ref = zero_feet_first_ref;
        ASSERT_EQ(*zero_feet_first_ref, *zero_feet_second_ref);
    }

TEST(LengthsComparison, given_zero_inch_and_zero_inch_should_return_equal)
    { 
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::INCH);
        QuantityMeasurement quantityMeasurement2(0.0, UnitValue::INCH);
        ASSERT_TRUE(quantityMeasurement1 == quantityMeasurement2);
    }

TEST(LengthsComparison, given_zero_inch_and_null_value_should_return_not_equal)
    {
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::INCH);
        ASSERT_FALSE(quantityMeasurement1 == nullptr);
    }

TEST(LengthsComparison, given_zero_inch_and_zero_inch_of_same_references_should_return_equal)
    {
        QuantityMeasurement *zero_inch_first_ref = new QuantityMeasurement(0.0, UnitValue::INCH);
        QuantityMeasurement *zero_inch_second_ref = zero_inch_first_ref;
        ASSERT_EQ(*zero_inch_first_ref, *zero_inch_second_ref);
    }

TEST(LengthsComparison, given_zero_inch_and_one_inch_should_return_not_equal)
    {
        QuantityMeasurement quantityMeasurement1(0.0, UnitValue::INCH);
        QuantityMeasurement quantityMeasurement2(1.0, UnitValue::INCH);
        ASSERT_FALSE(quantityMeasurement1 == quantityMeasurement2);
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

TEST(WeightComparison, given_one_kilogram_and_1000_grams_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::KILOGRAM);
        double result2 = quantityMeasurement.convertToBaseValue(1000, UnitValue::GRAM);
        ASSERT_EQ(result1, result2);
    }

TEST(WeightComparison, given_one_tonne_and_1000_kilograms_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::TONNE);
        double result2 = quantityMeasurement.convertToBaseValue(1000, UnitValue::KILOGRAM);
        ASSERT_EQ(result1, result2);
    }

TEST(WeightComparison, given_one_tonne_and_1000_grams_should_equal_1001_kilograms) 
    {
        QuantityMeasurement quantityMeasurement;
        double value1 = quantityMeasurement.convertToBaseValue(1.0, UnitValue::TONNE);
        double value2 = quantityMeasurement.convertToBaseValue(1000, UnitValue::GRAM);
        double result1 = quantityMeasurement.addingTwoUnits(value1, value2);
        double result2 = quantityMeasurement.convertToBaseValue(1001, UnitValue::KILOGRAM);
        ASSERT_EQ(result1, result2);
    }

TEST(TemperatureComparison, given_212_fahrenheit_and_100_celsius_should_return_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        double result1 = quantityMeasurement.convertToBaseValue(212, UnitValue::FAHRENHEIT);
        ASSERT_EQ(quantityMeasurement.temperatureConversion(100, UnitValue::CELSIUS, 32), result1);
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }