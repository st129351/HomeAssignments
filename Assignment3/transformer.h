#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>
#include "Gun.h"
#include "Armour.h"

struct TransformerData 
{
    std::string name;
    uint age;
};

class Transformer
{
public:

    Transformer(TransformerData botset);
    ~Transformer();
    // constructor and destructor

    void Fire();
    bool Transform();

    std::string GetName();
    uint GetLevel();
    uint GetHealth();
    uint GetAge();
    bool GetTransform();
    // getters

    Gun* GetGun();
    Armour* GetArmour(); // Armour* - the type of returning value (pointer on obj with class Armour)

    std::string GetGunName();
    uint GetGunAmmo();
    std::string GetArmourName();
    uint GetArmourStrength();
    // getters for encapsulation

    void SetLevel(uint new_level);
    void SetHealth(uint new_health);
    void SetTransform(bool new_transform);
    void SetName(std::string new_name);
    void SetAge(uint new_age);
    void SetGun(std::string new_gun, uint new_bullets);
    void SetArmour(std::string new_armour, uint new_strength);
    // setters

private:

	std::string _name;
	uint _age;
	bool _is_transform = false; // started value
    uint _level = 0; // started value
    uint _health = 100; // started value

	Gun* _gun; // association
    Armour* _armour; // composition
};

#endif