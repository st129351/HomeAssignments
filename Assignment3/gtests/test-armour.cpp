#include "Armour.h"
#include "gtest/gtest.h"

TEST(Armour, Initialization)
{
	Armour shield("Shield");
	EXPECT_EQ(shield.GetArmourStrength(), 100);
	EXPECT_EQ(shield.GetArmourName(), "Shield");
}

TEST(Armour, Setters)
{
	Armour shield("Shield");
	shield.SetArmourName("No armour");
	shield.SetArmourStrength(10);
	EXPECT_EQ(shield.GetArmourName(), "No armour");
    EXPECT_EQ(shield.GetArmourStrength(), 10);
}