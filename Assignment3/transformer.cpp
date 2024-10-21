#include "transformer.h"

Transformer::Transformer() {
	_armour = new Armour("Shield");
	_gun = new Gun("Defaul Gun");
}

~Transformer::Transformer() {
	delete _armour;
}

void Transformer::Fire()
{
	if (_gun && _gun -> GetGunAmmo() != 0) {
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

void Transformer::GetGunInfo() 
{
    _gun -> GetGunName();
    _gun -> GetGunAmmo();
}

void Transformer::GetArmourInfo()
{
	_armour -> GetArmourName();
	_armour -> GetArmourStrength();
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