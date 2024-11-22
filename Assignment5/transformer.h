//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment5

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

    virtual ~Transformer();
    // constructor and destructor
    // using virtual destructor, because i clean memory (because i use the new, i must use the delete) 
    // child-class(autobot), which specified via pointers to the parent-class(transformer)
    // whithout virtual destructor: called only ~Transformer()
    // whith virtual destructor: called called ~Autobot(), then ~Transformer()
    // it happens, because 1-stly (base-class* a = new Heir-class())
    // called constructor of base-class, then constructor of Heir-class
    // and delete both constructor i can only using virtual destructor,
    // which called 1-stly destr heir-class, then base-class
    // in fact virt-destr needed, when i want typed my heir-class with a base-class

    virtual void OpenFire() const;
    virtual void Transform() const;
    virtual void Ulta() const;
    // virtual methods for polymorphism
    void Fire();
    bool Transformation();

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
    // overload </> realized like class - methods


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
