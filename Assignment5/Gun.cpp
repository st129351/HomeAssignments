//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment5

#include "Gun.h"

Gun::Gun(std::string name): _gun_name(name), _ammo_rack(25) {} // contructor
// general, the constructor is need for init ammo rack
// init not like _ammo_rack = 25;

void Gun::Strike()
{
    if (_ammo_rack != 0)
    {
        std::cout << "Successful " << _gun_name << " shot!\n";
        _ammo_rack--;
    }
    else
    {
        std::cout << "Not enough bullets!\n";
    }
}

void Gun::Reloading()
{
    if (_ammo_rack < 25)
    {
        std::cout << "Successful " << GetGunName() << " reloading!\n";
        SetGunAmmo(25);
    }
    else
    {
        std::cout << "Ammo rack is full!\n";
    }
}

uint Gun::GetGunAmmo()
{
    return _ammo_rack;
}

void Gun::SetGunAmmo(uint bullets)
{
    _ammo_rack = bullets;
}

std::string Gun::GetGunName()
{
    return _gun_name;
}

void Gun::SetGunName(std::string name)
{
    _gun_name = name;
}
