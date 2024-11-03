
#include "gtest/gtest.h"
#include "overload_2_less.h"

TEST(overload_2_less, operator_overloading)
{
	TransformerData data{"Optimus Prime", 1500, "Default gun"};
	Transformer transformer(data);

	// capture with ostringstream
	// pushig data into a string "st", not outputting it (like cout)
	std::ostringstream st;
	st << transformer;

	std::string expct_str = "Info about transformer: Name: Optimus Prime, Age: 1500, Gun Name: Default gun";
	EXPECT_EQ(st.str(), expct_str);

}