//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment6
#include "objects.h"
#include <iostream>

bool Class1::bar(int num, std::vector<float>& vctr)
{
	if (num > 0)
	{
		return true;
	}
	return false;
}

int Class1::c_1_1()
{
	return 1;
}

float Class1::c_1_2()
{
    return 1.04;
}

void Class1::c_1_3()
{
    std::cout << "method c_1_3" << std::endl;
}

bool Class2::bar(int num, std::vector<float>& vctr)
{
	if (vctr.size() != 0)
	{
		return true;
	}
	return false;
}

int Class2::c_2_1()
{
	return 2;
}

float Class2::c_2_2()
{
    return 2.04;
}

void Class2::c_2_3()
{
    std::cout << "method c_2_3" << std::endl;
}

bool Class3::bar(int num, std::vector<float>& vctr)
{
	if (num == (-1)*static_cast<int>(vctr.size()))
	{
		return true;
	}
	return false;
}

int Class3::c_3_1()
{
	return 3;
}

float Class3::c_3_2()
{
    return 3.04;
}

void Class3::c_3_3()
{
    std::cout << "method c_3_3" << std::endl;
}