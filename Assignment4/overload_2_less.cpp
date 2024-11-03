#include "overload_2_less.h"

std::ostream& operator <<(std::ostream& stream, Transformer& transformer)
// input stream has type std::ostream
{
	stream << "Info about transformer: " 
	<< "Name: " << transformer.GetName() << ", "
	<< "Age: " << transformer.GetAge() << ", "
	<< "Gun Name: " << transformer.GetGunName();

	return stream;
}
