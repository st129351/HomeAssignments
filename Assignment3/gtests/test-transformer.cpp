#include "transformer.h"
#include "gtest/gtest.h"

TEST(transformer, cunstructor)
{
	TransformerData data{"Optimus Prime", 1000}; // init struct in variable data
	Transformer transformer(data);

	EXPECT_EQ(transformer.GetName(), "Optimus Prime");
	// in expect_eq(output_value, expected_value) expect equal between output and expected values
	EXPECT_EQ(transformer.GetAge(), 1000);
	EXPECT_EQ(transformer.GetLevel(), 0);
	EXPECT_EQ(transformer.GetHealth(), 100);



}