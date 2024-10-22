//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Gun.h"
#include "gtest/gtest.h"

TEST(Gun, Initialization)
{
	Gun gun("Gun");
	EXPECT_EQ(gun.GetGunAmmo(), 25);
	EXPECT_EQ(gun.GetGunName(), "Gun");
}

TEST(Gun, Strike)
{
	Gun gun("Gun");
	gun.SetGunAmmo(0);
	EXPECT_EQ(gun.GetGunAmmo(), 0); // check, that setter work correct
	gun.Strike();
	EXPECT_EQ(gun.GetGunAmmo(), 0);
	gun.SetGunAmmo(10);
	EXPECT_EQ(gun.GetGunAmmo(), 10);
	gun.Strike();
	EXPECT_EQ(gun.GetGunAmmo(), 9);
}

TEST(Gun, Reloading)
{
	Gun gun("Gun");
	gun.SetGunAmmo(12);
	EXPECT_EQ(gun.GetGunAmmo(), 12);
	gun.Reloading();
    EXPECT_EQ(gun.GetGunAmmo(), 25);
    gun.Reloading(); // check work reloading with full ammo rack
    EXPECT_EQ(gun.GetGunAmmo(), 25);
}

TEST(Gun, Setter)
{
	Gun gun("Gun");
	// check SetGunAmmo() higher
	gun.SetGunName("AWP");
	EXPECT_EQ(gun.GetGunName(), "AWP");
}