//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#include "Minicon.h"

Minicon::Minicon(MiniconData minicon1) : Transformer(minicon1) {
	_transform_to = minicon1.transform_to;
	_iq = minicon1.iq;
}
// constructor Transformer is built into constructor Minicon

void Minicon::Analysis() {
	std::cout << "Analysis completed" << std::endl;
}
// 1st method

std::string Minicon::GetTransformTo() {
	return _transform_to;
}

uint Minicon::GetIQ() {
	return _iq;
}
// getters

void Minicon::SetTransformTo(std::string transform_to)
{
	_transform_to = transform_to;
}

void Minicon::SetIQ(uint iq)
{
	_iq = iq;
}
// setters