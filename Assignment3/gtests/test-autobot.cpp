#include "Autobot.h"
#include "gtest/gtest.h"

TEST(Autobot, Initialization)
{
	AutobotData data{"Optimus Prime", 1000, "Truck", 320}; // init struct in variable data
	Autobot transformer(data); // init obj transformer

	EXPECT_EQ(transformer.GetTransformTo(), "Truck");
	EXPECT_EQ(transformer.GetMaxSpeed(), 320);
}

TEST(Autobot, Racing)
{
	AutobotData data{"Optimus Prime", 1000, "Truck", 320}; // init struct in variable data
	Autobot transformer(data); // init obj transformer

	EXPECT_FALSE(transformer.Transformer::GetTransform());
	transformer.Racing();
	EXPECT_TRUE(transformer.Transformer::GetTransform());
}

