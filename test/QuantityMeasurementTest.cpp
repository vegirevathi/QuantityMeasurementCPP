#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.h"
 
TEST(quantity_measurement, _one_feet_and_twelve_inch_should_be_equal) 
    {
        QuantityMeasurement quantityMeasurement;
        ASSERT_EQ(12, quantityMeasurement.feetToInchConverter(1));
    }
   
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }