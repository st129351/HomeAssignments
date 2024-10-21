#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "tarnsformer.h"

class Decepticon : public Transformer
{
public:
	Decepticon(DecepticonData decepticon1);

	void Flying();
    
    std::string GetTransformTo();
    uint GetViewingRadius();

    void SetTransformTo(std::string transform_to);
    void SetViewingRadius(uint viewing_radius);

private:

    std::string _transform_to;
    uint _viewing_radius;
}

struct DecepticonData : TransformerData
{
    std::string transform_to;
    uint viewing_radius;

}

#endif