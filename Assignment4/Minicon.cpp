//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#include "Minicon.h"

Minicon::Minicon(MiniconData minicon1) : Transformer(minicon1)
{
    _transform_to = minicon1.transform_to;
    _iq = minicon1.iq;
}
// constructor Transformer is built into constructor Minicon

Minicon::Minicon() : Transformer()
{
    _transform_to = "No transform";
    _iq = 0;
}

void Minicon::Analysis()
{
    std::cout << "Analysis completed" << std::endl;
}
// 1st method

std::string Minicon::GetTransformTo()
{
    return _transform_to;
}

uint Minicon::GetIQ()
{
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

std::ostream& operator <<(std::ostream& stream, Minicon& minicon)
{
    stream << "Info about minicon: "
           << "Name: " << minicon.GetName() << ", "
           << "Age: " << minicon.GetAge() << ", "
           << "Gun: " << minicon.GetGunName() << ", "
           << "Max speed: " << minicon.GetIQ() << ", "
           << "Transform to: " << minicon.GetTransformTo();

    return stream;
}
// overloading <<, "std::o(utput)stream" - link to output stream
// minicon - second arg, now we can output info about minicon like cout<<minicon;

bool Minicon::operator >(Minicon& minicon1)
{
    return _iq > minicon1.GetIQ();
}

bool Minicon::operator <(Minicon& minicon2)
{
    return _iq < minicon2.GetIQ();
}
// overload </> realized like class - methods