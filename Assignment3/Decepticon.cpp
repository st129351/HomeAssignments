#include "Decepticon.h"

Decepticon::Decepticon(DecepticonData decepticon1) : Transformer(decepticon1) {
	_transform_to = decepticon1.transform_to;
	_max_speed = decepticon1.viewing_radius;
}
// constructor Transformer is built into constructor Decepticon

void Decepticon::Flying() {
	SetTransfom();
	std::cout << "Successful Transformation to " << GetTransformTo() << std::endl;
	std::cout << "Start flying!" << std::endl;
	std::cout<< "Viewing radius is: " << GetViewingRadius() << std::endl;
}
// 1st method

std::string Decepticon::GetTransformTo() {
	return _transform_to;
}

uint Decepticon::GetViewingRadius() {
	return _viewing_radius;
}
// getters

void Decepticon::SetTransformTo(std::string transform_to)
{
	_transform_to = transform_to;
}

void Decepticon::SetViewingRadius(uint viewing_radius)
{
	_viewing_radius = viewing_radius;
}
// setters