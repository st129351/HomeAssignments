//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#ifndef MINICON_H
#define MINICON_H

#include "transformer.h"

struct MiniconData : TransformerData
{
    std::string transform_to;
    uint iq;

};

class Minicon : public Transformer
{
public:
    Minicon(MiniconData minicon1);
    Minicon();

    void Analysis();

    std::string GetTransformTo();
    uint GetIQ();

    void SetTransformTo(std::string transform_to);
    void SetIQ(uint iq);

    friend std::ostream& operator <<(std::ostream& stream, Minicon& autobot1);
    // overload <<
    bool operator >(Minicon& autobot1);
    bool operator <(Minicon& autobot2);
    // overload </> value for compare (stronger/weaker) - iq

private:

    std::string _transform_to;
    uint _iq;
};

#endif