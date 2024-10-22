//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "transformer.h"

Transformer::Transformer(TransformerData botset) {
	_armour = new Armour("Shield");
	_gun = new Gun("Defaul Gun");

	_name = botset.name;
	_age = botset.age;
}

Transformer::~Transformer() {
	delete _armour;
}

void Transformer::Fire()
{
	if (_gun && GetGunAmmo() != 0) {
		// ^ check _gun != nullptr
		_gun -> Strike();
	}
	else {
		_gun -> Reloading();
		_gun -> Strike();
	}
}

bool Transformer::Transform()
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

Gun* Transformer::GetGun() 
{
    return _gun;
}

Armour* Transformer::GetArmour()
{
	return _armour;
}

std::string Transformer::GetGunName()
{
	return _gun->GetGunName();
}

uint Transformer::GetGunAmmo()
{
	return _gun->GetGunAmmo();
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
	delete _gun;
	// delete gun, if it was in memory
	_gun = new Gun(new_gun);

	_gun -> SetGunAmmo(new_bullets);
}

void Transformer::SetArmour(std::string new_armour, uint new_strength)
{
	delete _armour;
	_armour = new Armour(new_armour);

	_armour -> SetArmourStrength(new_strength);
}