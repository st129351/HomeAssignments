//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment5

#include "transformer.h"

Transformer::Transformer(TransformerData botset) : _gun(botset.gun_name)
{
    _name = botset.name;
    _age = botset.age;
    _armour = new Armour("Shield");
}

Transformer::Transformer() : _gun("Nameless gun")
{
    _name = "Nameless transformer";
    _age = 0;
    _armour = new Armour("Nameless armour");
}

Transformer::~Transformer()
{
    delete _armour;
}

void Transformer::OpenFire() const // don't change the state of the object
{
    std::cout << "OpenFire , transformer" << std::endl;
}

void Transformer::Transform() const 
{   
    std::cout << "Transform , transformer" << std::endl;
}

void Transformer::Ulta() const
{
    std::cout << "Ulta , transformer" << std::endl;
}
// virtual methods for polymorphism

void Transformer::Fire()
{
    if (GetGunAmmo() != 0)
    {
        _gun.Strike();
    }
    else
    {
        _gun.Reloading();
        _gun.Strike();
    }
}

bool Transformer::Transformation()
{
    _is_transform = !_is_transform;
    return _is_transform;
    //transformation and untransformation
}

// next getters

std::string Transformer::GetName()
{
    return _name;
}

uint Transformer::GetLevel()
{
    return _level;
}

uint Transformer::GetHealth()
{
    return _health;
}

uint Transformer::GetAge()
{
    return _age;
}

bool Transformer::GetTransform()
{
    return _is_transform;
}

Gun Transformer::GetGun()
{
    return _gun;
}

Armour* Transformer::GetArmour()
{
    return _armour;
}

std::string Transformer::GetGunName()
{
    return _gun.GetGunName();
}

uint Transformer::GetGunAmmo()
{
    return _gun.GetGunAmmo();
}

std::string Transformer::GetArmourName()
{
    return _armour->GetArmourName();
}

uint Transformer::GetArmourStrength()
{
    return _armour->GetArmourStrength();
}

// next setters

void Transformer::SetLevel(uint new_level)
{
    _level = new_level;
}

void Transformer::SetHealth(uint new_health)
{
    _health = new_health;
}

void Transformer::SetTransform(bool new_transform)
{
    _is_transform = new_transform;
}

void Transformer::SetName(std::string new_name)
{
    _name = new_name;
}

void Transformer::SetAge(uint new_age)
{
    _age = new_age;
}

void Transformer::SetGun(std::string new_gun, uint new_bullets)
{
    _gun.SetGunName(new_gun);
    _gun.SetGunAmmo(new_bullets);
}

void Transformer::SetArmour(std::string new_armour, uint new_strength)
{
    delete _armour;
    _armour = new Armour(new_armour);

    _armour -> SetArmourStrength(new_strength);
}

std::ostream& operator <<(std::ostream& stream, Transformer& transformer)
{
    stream << "Info about transformer: "
           << "Name: " << transformer.GetName() << ", "
           << "Age: " << transformer.GetAge() << ", "
           << "Gun: " << transformer.GetGunName();

    return stream;
}
// overloading <<, "std::o(utput)stream" - link to output stream
// transformer - second arg, now we can output info about transformer like cout<<transformer;

bool Transformer::operator >(Transformer& transformer1)
{
    return _age > transformer1.GetAge();
}

bool Transformer::operator <(Transformer& transformer2)
{
    return _age < transformer2.GetAge();
}
// overload </> realized like class - methods