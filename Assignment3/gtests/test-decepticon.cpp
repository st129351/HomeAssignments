#include "Decepticon.h"
#include "gtest/gtest.h"

TEST(Decepticon, Initialization)
{
	DecepticonData data{"Optimus Prime", 1000, "Truck", 320}; // init struct in variable data
	Decepticon transformer(data); // init obj transformer

	EXPECT_EQ(transformer.GetTransformTo(), "Truck");
	EXPECT_EQ(transformer.GetViewingRadius(), 320);
}

TEST(Decepticon, Flying)
{
	DecepticonData data{"Optimus Prime", 1000, "Truck", 320}; // init struct in variable data
	Decepticon transformer(data); // init obj transformer

	EXPECT_FALSE(transformer.Transformer::GetTransform());
	transformer.Flying();
	EXPECT_TRUE(transformer.Transformer::GetTransform());
}

