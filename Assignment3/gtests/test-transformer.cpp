//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "gtest/gtest.h"
#include "transformer.h"

TEST(transformer, Initialization)
{
	TransformerData data{"Optimus Prime", 1000}; // init struct in variable data
	Transformer transformer(data); // init obj transformer

	EXPECT_EQ(transformer.GetName(), "Optimus Prime");
	// in expect_eq(output_value, expected_value) expect equal between output and expected values
	EXPECT_EQ(transformer.GetAge(), 1000);
	EXPECT_EQ(transformer.GetLevel(), 0);
	EXPECT_EQ(transformer.GetHealth(), 100);
	EXPECT_FALSE(transformer.GetTransform());
	// assume, that started value in _is_transform is false

	ASSERT_NE(transformer.GetGun(), nullptr);
	// assert immediately fails the test with an error
	// expect gives all the accumulated errors after executing the test
	// check, that _gun is init
	EXPECT_EQ(transformer.GetGunName(), "Defaul Gun");
	EXPECT_EQ(transformer.GetGunAmmo(), 25); // check properties, not private _gun

	ASSERT_NE(transformer.GetArmour(), nullptr);
	EXPECT_EQ(transformer.GetArmourName(), "Shield");
	EXPECT_EQ(transformer.GetArmourStrength(), 100);
}

TEST(transformer, Fire)
{
	TransformerData data{"Optimus Prime", 1000};
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
	TransformerData data{"Optimus Prime", 1000};
	Transformer transformer(data);

	// started is false (check in Initialization)
	transformer.Transform();
	EXPECT_TRUE(transformer.GetTransform());
}

TEST(transformer, Setters)
{
	TransformerData data{"Optimus Prime", 1000};
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
    EXPECT_EQ(transformer.GetName(), "Bumblebee");
	EXPECT_EQ(transformer.GetAge(), 15);

	ASSERT_NE(transformer.GetGun(), nullptr);
	// assert not equal (in this case Gun *_gun)
	EXPECT_EQ(transformer.GetGunName(), "AK-47");
	EXPECT_EQ(transformer.GetGunAmmo(), 9); // check properties, not private _gun

	ASSERT_NE(transformer.GetArmour(), nullptr);
	EXPECT_EQ(transformer.GetArmourName(), "Exoskeleton");
	EXPECT_EQ(transformer.GetArmourStrength(), 9);
}