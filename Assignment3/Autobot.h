#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "tarnsformer.h"
#include "thread"
#include "chrono" // to delay time in Racing()

class Autobot : public Transformer
{
public:
	Autobot(AutobotData autobot1);

	void Racing();
    
    std::string GetTransformTo();
    uint GetMaxSpeed();

    void SetTransformTo(std::string transform_to);
    void SetMaxSpeed(uint max_speed);

private:

    std::string _transform_to;
    uint _max_spped;
}

struct AutobotData : TransformerData // defaults to public
{
	std::string transform_to;
	uint max_speed;
}


#endif