//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment3

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

struct AutobotData : TransformerData // defaults to public
{
	std::string transform_to;
	uint max_speed;
};

class Autobot : public Transformer
{
public:
	Autobot(AutobotData autobot1);
    Autobot();

	void Racing();
    
    std::string GetTransformTo();
    uint GetMaxSpeed();

    void SetTransformTo(std::string transform_to);
    void SetMaxSpeed(uint max_speed);

    friend std::ostream& operator <<(std::ostream& stream, Autobot& autobot1);
    // overload <<
    bool operator >(Autobot& autobot1);
    bool operator <(Autobot& autobot2);
    // overload </> value for compare (stronger/weaker) - age

private:

    std::string _transform_to;
    uint _max_speed;
};

#endif