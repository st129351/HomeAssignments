//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include <iostream>
#include <gtest/gtest.h>

#include "transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Minicon.h"
#include "overload_2_less.h"

int main()
{
	std::cout << "GAME ON!" << std::endl;
	TransformerData data = {"Optimus Prime", 1500, "Default gun"};
	Transformer first_transformer(data);
    std::cout << first_transformer << std::endl;
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}