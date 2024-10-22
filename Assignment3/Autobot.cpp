//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Autobot.h"

Autobot::Autobot(AutobotData autobot1) : Transformer(autobot1) {
	_transform_to = autobot1.transform_to;
	_max_speed = autobot1.max_speed;
}
// constructor Transformer is built into constructor Autobot
// Transformer(autobot1) using only needed fields (that are in TransformerData)
// constructor

void Autobot::Racing() {
	Transformer::SetTransform(true); // specifided method scope (method from Transformer)
	std::cout << "Successful Transformation to " << GetTransformTo() << std::endl;
	std::cout << "Start racing!" << std::endl;
	std::cout << "Speed: " << GetMaxSpeed() / 3 << std::endl;
	std::cout << "Speed: " << 2 * (GetMaxSpeed() / 3)  << std::endl;
	std::cout << "Maximum speed reached! Speed: " << GetMaxSpeed() << std::endl;
}
// 1st method

std::string Autobot::GetTransformTo() {
	return _transform_to;
}

uint Autobot::GetMaxSpeed() {
	return _max_speed;
}
// getters

void Autobot::SetTransformTo(std::string transform_to)
{
	_transform_to = transform_to;
}

void Autobot::SetMaxSpeed(uint max_speed)
{
	_max_speed = max_speed;
}
// setters