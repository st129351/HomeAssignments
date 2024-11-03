//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#include "Armour.h"
#include "gtest/gtest.h"

TEST(Armour, Initialization)
{
    Armour shield("Shield");
    EXPECT_EQ(shield.GetArmourStrength(), 100);
    EXPECT_STREQ(shield.GetArmourName().c_str(), "Shield");
}

TEST(Armour, Setters)
{
    Armour shield("Shield");
    shield.SetArmourName("No armour");
    shield.SetArmourStrength(10);
    EXPECT_STREQ(shield.GetArmourName().c_str(), "No armour");
    EXPECT_EQ(shield.GetArmourStrength(), 10);
}