//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#ifndef GUN_H
#define GUN_H

#include <iostream>
#include <string>

class Gun
{
public:
	Gun(std::string name); 
	// init ammo rack (in Gun.cpp) and name of gun (for Strike func)
    void Strike();
    void Reloading();
    uint GetGunAmmo(); // getter
    std::string GetGunName(); // getter
    void SetGunAmmo(uint bullets); // setter
    void SetGunName(std::string name); // setter
    

private:
	std::string _gun_name;
	uint _ammo_rack;
};

#endif
