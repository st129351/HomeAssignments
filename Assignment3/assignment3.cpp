//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include <iostream>
#include <gtest/gtest.h>

#include "transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Minicon.h"

int main()
{
	std::cout << "GAME ON!" << std::endl;
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}