//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment6

#include "gtest/gtest.h"
#include "objects.h"
#include "MyClass.h"

TEST(MyClass, SpecInt)
{
	std::vector<float> emptyV;
    MyClass<int> cls(1, 1, emptyV);
    EXPECT_TRUE(cls.foo());
}

TEST(MyClass, SpecDouble)
{
	std::vector<float> emptyV;
    MyClass<double> cls(1.02, 1.01, emptyV);
    EXPECT_FALSE(cls.foo());
}

TEST(Class1, True)
{
	std::vector<float> emptyV;
	Class1 obj;
	MyClass<Class1> a(obj, 10, emptyV);
	EXPECT_TRUE(a.foo());
}

TEST(Class1, False)
{
	std::vector<float> emptyV;
	Class1 obj;
	MyClass<Class1> a(obj, 0, emptyV);
	EXPECT_FALSE(a.foo());
}

TEST(Class2, True)
{
	std::vector<float> v = {1.01};
	Class2 obj;
	MyClass<Class2> a(obj, 10, v);
	EXPECT_TRUE(a.foo());
}

TEST(Class2, False)
{
	std::vector<float> v = {};
	Class2 obj;
	MyClass<Class2> a(obj, 10, v);
	EXPECT_FALSE(a.foo());
}

TEST(Class3, True)
{
	std::vector<float> v = {1.01};
	Class3 obj;
	MyClass<Class3> a(obj, -1, v);
	EXPECT_TRUE(a.foo());
}

TEST(Class3, False)
{
	std::vector<float> v = {1.01};
	Class3 obj;
	MyClass<Class3> a(obj, 10, v);
	EXPECT_FALSE(a.foo());
}
