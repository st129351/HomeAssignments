//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Autobot.h"
#include "gtest/gtest.h"

TEST(Autobot, Initialization)
{
	AutobotData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
	Autobot transformer(data); // init obj transformer

	EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Truck");
	EXPECT_EQ(transformer.GetMaxSpeed(), 320);
}

TEST(Autobot, Racing)
{
	AutobotData data{"Optimus Prime", 1000, "gun", "Truck", 320};
	Autobot transformer(data);

	EXPECT_FALSE(transformer.Transformer::GetTransform());
	transformer.Racing();
	EXPECT_TRUE(transformer.Transformer::GetTransform());
}

TEST(Autobot, Setters)
{
	AutobotData data{"Optimus Prime", 1000, "gun", "Truck", 320};
	Autobot transformer(data);

	transformer.SetTransformTo("BMW M5 F90");
	transformer.SetMaxSpeed(305);
    ASSERT_STREQ(transformer.GetTransformTo().c_str(), "BMW M5 F90");
	EXPECT_EQ(transformer.GetMaxSpeed(), 305);
}