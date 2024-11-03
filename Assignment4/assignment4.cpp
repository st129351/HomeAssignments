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

	TransformerData data1 = {"Optimus Prime", 1500, "Default gun"};
	Transformer first_transformer(data1);
    std::cout << first_transformer << std::endl;

    TransformerData data2 = {"Bumblebee", 15, "Big gun"};
	Transformer second_transformer(data2);
    std::cout << second_transformer << std::endl;

    Transformer third_transformer; 
    // noname transformer (has only start value)
    std::cout << third_transformer << std::endl;

    bool value1 = first_transformer > second_transformer;
    bool value2 = second_transformer < third_transformer;
    std::cout << "Optimus is older, than Bumblebee. It's: " << std::boolalpha << value1 << std::endl;
    std::cout << "Bumblebee is younger, than Nameless transformer. It's: " << std::boolalpha << value2 << std::endl;
    //boolalpha for true/false, not 1/0
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}