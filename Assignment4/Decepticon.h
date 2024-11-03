//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

struct DecepticonData : TransformerData
{
    std::string transform_to;
    uint viewing_radius;

};

class Decepticon : public Transformer
{
public:
    Decepticon(DecepticonData decepticon1);
    Decepticon();

    void Flying();

    std::string GetTransformTo();
    uint GetViewingRadius();

    void SetTransformTo(std::string transform_to);
    void SetViewingRadius(uint viewing_radius);

    friend std::ostream& operator <<(std::ostream& stream, Decepticon& decepticon1);
    // overload <<
    bool operator >(Decepticon& decepticon1);
    bool operator <(Decepticon& decepticon2);
    // overload </> value for compare (stronger/weaker) - viewing radius
    // overload </> realized like class - methods

private:

    std::string _transform_to;
    uint _viewing_radius;
};

#endif