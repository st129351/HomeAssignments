//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#ifndef ARMOUR_H
#define ARMOUR_H

#include <iostream>
#include <string>

class Armour
{
public:

    Armour(std::string name);

    std::string GetArmourName();
    uint GetArmourStrength();

    void SetArmourName(std::string new_name);
    void SetArmourStrength(uint new_strength);

private:
	std::string _armour_name;
	uint _strength;
};

#endif