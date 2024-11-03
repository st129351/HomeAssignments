//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Minicon.h"
#include "gtest/gtest.h"

TEST(Minicon, Initialization1)
{
	MiniconData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
	Minicon transformer(data); // init obj transformer

	EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Truck");
	EXPECT_EQ(transformer.GetIQ(), 320);
}

TEST(minicon, Initialization2)
{
	Minicon minicon; // init obj minicon

	EXPECT_STREQ(minicon.GetTransformTo().c_str(), "No transform");
	EXPECT_EQ(minicon.GetIQ(), 0);
}

TEST(minicon, Overloads)
{
	MiniconData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
	Minicon minicon(data); // init obj minicon

	Minicon minicon1;
	bool value1 = minicon > minicon1;
	bool value2 = minicon1 < minicon;
    EXPECT_TRUE(value1);
    EXPECT_TRUE(value2);

    std::ostringstream st;
    // ostringstream - a stream for create string
    st << minicon1; 
    // record data into st
    std::string expected_st = "Info about minicon: Name: Nameless transformer, Age: 0, Gun: Nameless gun, Max speed: 0, Transform to: No transform";
    EXPECT_EQ(expected_st, st.str());
    // .str() return accumulated stream data
}

TEST(Minicon, Analysis)
{
	MiniconData data{"Optimus Prime", 1000, "gun", "Truck", 320};
	Minicon transformer(data); 
	transformer.Analysis();
}

TEST(Minicon, Setters)
{
	MiniconData data{"Optimus Prime", 1000, "gun", "Truck", 320};
	Minicon transformer(data);

	transformer.SetTransformTo("Tesla Cybertruck");
	transformer.SetIQ(100);
	EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Tesla Cybertruck");
	EXPECT_EQ(transformer.GetIQ(), 100);
}