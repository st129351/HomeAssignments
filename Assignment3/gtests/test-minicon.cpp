//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Minicon.h"
#include "gtest/gtest.h"

TEST(Minicon, Initialization)
{
	MiniconData data{"Optimus Prime", 1000, "Truck", 320}; // init struct in variable data
	Minicon transformer(data); // init obj transformer

	EXPECT_EQ(transformer.GetTransformTo(), "Truck");
	EXPECT_EQ(transformer.GetIQ(), 320);
}

TEST(Minicon, Analysis)
{
	MiniconData data{"Optimus Prime", 1000, "Truck", 320};
	Minicon transformer(data); 

	EXPECT_FALSE(transformer.Transformer::GetTransform());
	transformer.Analysis();
	EXPECT_TRUE(transformer.Transformer::GetTransform());
}

TEST(Minicon, Setters)
{
	MiniconData data{"Optimus Prime", 1000, "Truck", 320};
	Minicon transformer(data);

	transformer.SetTransformTo("Tesla Cybertruck");
	transformer.SetIQ(100);
	EXPECT_EQ(transformer.GetTransformTo(), "Tesla Cybertruck");
	EXPECT_EQ(transformer.GetIQ(), 100);
}