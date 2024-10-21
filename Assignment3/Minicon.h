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

	void Analysis();
    
    std::string GetTransformTo();
    uint GetIQ();

    void SetTransformTo(std::string transform_to);
    void SetIQ(uint iq);

private:

    std::string _transform_to;
    uint _iq;
};

#endif