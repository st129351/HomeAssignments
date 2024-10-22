#include "Armour.h"
#include "gtest/gtest.h"

TEST(Armour, Initialization)
{
	Armour shield("Shield");
	EXPECT_EQ(shield.GetArmourStrength(), 100);
	EXPECT_EQ(shield.GetArmourName(), "Shield");
}
