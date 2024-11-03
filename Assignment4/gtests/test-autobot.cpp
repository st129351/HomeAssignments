//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Autobot.h"
#include "gtest/gtest.h"

TEST(Autobot, Initialization1)
{
	AutobotData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
	Autobot transformer(data); // init obj transformer

	EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Truck");
	EXPECT_EQ(transformer.GetMaxSpeed(), 320);
}

TEST(autobot, Initialization2)
{
	Autobot autobot; // init obj autobot

	EXPECT_STREQ(autobot.GetTransformTo().c_str(), "No transform");
	EXPECT_EQ(autobot.GetMaxSpeed(), 0);
}

TEST(autobot, Overloads)
{
	AutobotData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
	Autobot autobot(data); // init obj autobot

	Autobot autobot1;
	bool value1 = autobot > autobot1;
	bool value2 = autobot1 < autobot;
    EXPECT_TRUE(value1);
    EXPECT_TRUE(value2);

    std::ostringstream st;
    // ostringstream - a stream for create string
    st << autobot1; 
    // record data into st
    std::string expected_st = "Info about autobot: Name: Nameless transformer, Age: 0, Gun: Nameless gun, Max speed: 0, Transform to: No transform";
    EXPECT_EQ(expected_st, st.str());
    // .str() return accumulated stream data
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