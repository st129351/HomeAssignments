//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment5

#include "Decepticon.h"

Decepticon::Decepticon(DecepticonData decepticon1) : Transformer(decepticon1)
{
    _transform_to = decepticon1.transform_to;
    _viewing_radius = decepticon1.viewing_radius;
}
// constructor Transformer is built into constructor Decepticon

Decepticon::Decepticon() : Transformer()
{
    _transform_to = "No transform";
    _viewing_radius = 0;
}

void Decepticon::OpenFire() const
{
    std::cout << "OpenFire , Decepticon" << std::endl;
}

void Decepticon::Transform() const
{   
    std::cout << "Transform , Decepticon" << std::endl;
}

void Decepticon::Ulta() const
{
    std::cout << "Ulta , Decepticon" << std::endl;
}
// virtual methods for polymorphism

void Decepticon::Flying()
{
    SetTransform(true);
    std::cout << "Successful Transformation to " << GetTransformTo() << std::endl;
    std::cout << "Start flying!" << std::endl;
    std::cout<< "Viewing radius is: " << GetViewingRadius() << std::endl;
}
// 1st method

std::string Decepticon::GetTransformTo()
{
    return _transform_to;
}

uint Decepticon::GetViewingRadius()
{
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

std::ostream& operator <<(std::ostream& stream, Decepticon& decepticon)
{
    stream << "Info about decepticon: "
           << "Name: " << decepticon.GetName() << ", "
           << "Age: " << decepticon.GetAge() << ", "
           << "Gun: " << decepticon.GetGunName() << ", "
           << "Max speed: " << decepticon.GetViewingRadius() << ", "
           << "Transform to: " << decepticon.GetTransformTo();

    return stream;
}
// overloading <<, "std::o(utput)stream" - link to output stream
// decepticon - second arg, now we can output info about decepticon like cout<<decepticon;

bool Decepticon::operator >(Decepticon& decepticon1)
{
    return _viewing_radius > decepticon1.GetViewingRadius();
}

bool Decepticon::operator <(Decepticon& decepticon2)
{
    return _viewing_radius < decepticon2.GetViewingRadius();
}
// overload </> realized like class - methods