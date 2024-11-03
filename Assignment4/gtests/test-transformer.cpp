//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "gtest/gtest.h"
#include "transformer.h"
#include <sstream>
// sstream for output string stream (ostringstream for capturing)

TEST(transformer, Initialization1)
{
	TransformerData data{"Optimus Prime", 1000, "gun"}; // init struct in variable data
	Transformer transformer(data); // init obj transformer

	EXPECT_STREQ(transformer.GetName().c_str(), "Optimus Prime"); // c_str() - type casting (std::sting --> c-style string)
	// in expect_eq(output_value, expected_value) expect equal between output and expected values
	EXPECT_EQ(transformer.GetAge(), 1000);
	EXPECT_EQ(transformer.GetLevel(), 0);
	EXPECT_EQ(transformer.GetHealth(), 100);
	EXPECT_FALSE(transformer.GetTransform());
	// assume, that started value in _is_transform is false

	// assert immediately fails the test with an error
	// expect gives all the accumulated errors after executing the test
	// check, that _gun is init
	EXPECT_STREQ(transformer.GetGunName().c_str(), "gun");
	EXPECT_EQ(transformer.GetGunAmmo(), 25); // check properties, not private _gun

	ASSERT_NE(transformer.GetArmour(), nullptr);
	EXPECT_STREQ(transformer.GetArmourName().c_str(), "Shield");
	EXPECT_EQ(transformer.GetArmourStrength(), 100);
}

TEST(transformer, Initialization2)
{
	Transformer transformer; // init obj transformer

	EXPECT_STREQ(transformer.GetName().c_str(), "Nameless transformer"); // c_str() - type casting (std::sting --> c-style string)
	// in expect_eq(output_value, expected_value) expect equal between output and expected values
	EXPECT_EQ(transformer.GetAge(), 0);
	EXPECT_EQ(transformer.GetLevel(), 0);
	EXPECT_EQ(transformer.GetHealth(), 100);
	EXPECT_FALSE(transformer.GetTransform());
	// assume, that started value in _is_transform is false

	// assert immediately fails the test with an error
	// expect gives all the accumulated errors after executing the test
	// check, that _gun is init
	EXPECT_STREQ(transformer.GetGunName().c_str(), "Nameless gun");
	EXPECT_EQ(transformer.GetGunAmmo(), 25); // check properties, not private _gun

	ASSERT_NE(transformer.GetArmour(), nullptr);
	EXPECT_STREQ(transformer.GetArmourName().c_str(), "Nameless armour");
	EXPECT_EQ(transformer.GetArmourStrength(), 100);
}

TEST(transformer, Overloads)
{
	TransformerData data{"Optimus Prime", 1000, "gun"}; // init struct in variable data
	Transformer transformer(data); // init obj transformer

	Transformer transformer1;
	bool value1 = transformer > transformer1;
	bool value2 = transformer1 < transformer;
    EXPECT_TRUE(value1);
    EXPECT_TRUE(value2);

    std::ostringstream st;
    // ostringstream - a stream for create string
    st << transformer1; 
    // record data into st
    std::string expected_st = "Info about transformer: Name: Nameless transformer, Age: 0, Gun: Nameless gun";
    EXPECT_EQ(expected_st, st.str());
    // .str() return accumulated stream data
}

TEST(transformer, Fire)
{
	TransformerData data{"Optimus Prime", 1000, "gun"};
	Transformer transformer(data);

	transformer.Fire();
	EXPECT_EQ(transformer.GetGunAmmo(), 24);
	transformer.SetGun("Gun", 0);
	EXPECT_EQ(transformer.GetGunAmmo(), 0);
	transformer.Fire();
	EXPECT_EQ(transformer.GetGunAmmo(), 24);
	// check strike, and reloading with strike
}

TEST(transformer, Transform)
{
	TransformerData data{"Optimus Prime", 1000, "gun"};
	Transformer transformer(data);

	// started is false (check in Initialization)
	transformer.Transform();
	EXPECT_TRUE(transformer.GetTransform());
}

TEST(transformer, Setters)
{
	TransformerData data{"Optimus Prime", 1000, "gun"};
	Transformer transformer(data);

	transformer.SetLevel(5);
	transformer.SetHealth(34);
	transformer.SetTransform(true);
	transformer.SetName("Bumblebee");
	transformer.SetAge(15);
	transformer.SetGun("AK-47", 9);
    transformer.SetArmour("Exoskeleton", 9);

    EXPECT_EQ(transformer.GetLevel(), 5);
    EXPECT_EQ(transformer.GetHealth(), 34);
    EXPECT_TRUE(transformer.GetTransform());
    EXPECT_STREQ(transformer.GetName().c_str(), "Bumblebee");
	EXPECT_EQ(transformer.GetAge(), 15);

	// assert not equal
	EXPECT_STREQ(transformer.GetGunName().c_str(), "AK-47");
	EXPECT_EQ(transformer.GetGunAmmo(), 9); // check properties, not private _gun

	ASSERT_NE(transformer.GetArmour(), nullptr);
	EXPECT_STREQ(transformer.GetArmourName().c_str(), "Exoskeleton");
	EXPECT_EQ(transformer.GetArmourStrength(), 9);
}