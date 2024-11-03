//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Gun.h"
#include "Armour.h"
#include <fstream>

struct TransformerData 
{
    std::string name;
    uint age;
    std::string gun_name;
};

class Transformer
{
public:

    Transformer(TransformerData botset);
    // constructor
    Transformer();
    // constructor overloading

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

    Gun GetGun();
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

    friend std::ostream& operator <<(std::ostream& stream, Transformer& transformer1);
    // overload <<
    bool operator >(Transformer& transformer1);
    bool operator <(Transformer& transformer2);
    // overload </> value for compare (stronger/weaker) - age


private:

	std::string _name;
	uint _age;
	bool _is_transform = false; // started value
    uint _level = 0; // started value
    uint _health = 100; // started value

	Gun _gun; // composition 
    Armour* _armour;// association
};

#endif
