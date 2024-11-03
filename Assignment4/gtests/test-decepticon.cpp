//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment4

#include "Decepticon.h"
#include "gtest/gtest.h"

TEST(Decepticon, Initialization1)
{
    DecepticonData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
    Decepticon transformer(data); // init obj transformer

    EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Truck");
    EXPECT_EQ(transformer.GetViewingRadius(), 320);
}

TEST(Decepticon, Initialization2)
{
    Decepticon decepticon; // init obj decepticon

    EXPECT_STREQ(decepticon.GetTransformTo().c_str(), "No transform");
    EXPECT_EQ(decepticon.GetViewingRadius(), 0);
}

TEST(decepticon, Overloads)
{
    DecepticonData data{"Optimus Prime", 1000, "gun", "Truck", 320}; // init struct in variable data
    Decepticon decepticon(data); // init obj decepticon

    Decepticon decepticon1;
    bool value1 = decepticon > decepticon1;
    bool value2 = decepticon1 < decepticon;
    EXPECT_TRUE(value1);
    EXPECT_TRUE(value2);

    std::ostringstream st;
    // ostringstream - a stream for create string
    st << decepticon1;
    // record data into st
    std::string expected_st = "Info about decepticon: Name: Nameless transformer, Age: 0, Gun: Nameless gun, Max speed: 0, Transform to: No transform";
    EXPECT_EQ(expected_st, st.str());
    // .str() return accumulated stream data
}

TEST(Decepticon, Flying)
{
    DecepticonData data{"Optimus Prime", 1000, "gun", "Truck", 320};
    Decepticon transformer(data);

    EXPECT_FALSE(transformer.Transformer::GetTransform());
    transformer.Flying();
    EXPECT_TRUE(transformer.Transformer::GetTransform());
}

TEST(Decepticon, Setters)
{
    DecepticonData data{"Optimus Prime", 1000, "gun", "Truck", 320};
    Decepticon transformer(data);

    transformer.SetTransformTo("Mercedes VISION EQXX");
    transformer.SetViewingRadius(300);
    EXPECT_STREQ(transformer.GetTransformTo().c_str(), "Mercedes VISION EQXX");
    EXPECT_EQ(transformer.GetViewingRadius(), 300);
}