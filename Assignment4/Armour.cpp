//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#include "Armour.h"

Armour::Armour(std::string name) : _armour_name(name), _strength(100) {}
// constructor

std::string Armour::GetArmourName()
{
    return _armour_name;
}

uint Armour::GetArmourStrength()
{
    return _strength;
}

void Armour::SetArmourName(std::string new_name)
{
    _armour_name = new_name;
}

void Armour::SetArmourStrength(uint new_strength)
{
    _strength = new_strength;
}