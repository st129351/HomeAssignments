//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment6
#ifndef MYCLASS_H
#define MYCLASS_H

#include <vector>

template <typename T>
class MyClass
{
public:

	MyClass(T object, int num, std::vector<float> vctr)
	{
		_object = object;
		_num = num;
		_vctr = vctr;
	};

	bool foo()
	{
		return _object.bar(_num, _vctr);
	}

private:
	T _object;
	int _num;
	std::vector<float> _vctr;
};

template <>
class MyClass<int>
{
public:

	MyClass(int object, int num, std::vector<float> vctr)
	{
		_object = object;
		_num = num;
		_vctr = vctr;
	};

	bool foo()
	{
		return true;
	}

private:
	int _object;
	int _num;
	std::vector<float> _vctr;
};

template <>
class MyClass<double>
{
public:

	MyClass(double object, int num, std::vector<float> vctr)
	{
		_object = object;
		_num = num;
		_vctr = vctr;
	};

	bool foo()
	{
		return false;
	}

private:
	double _object;
	int _num;
	std::vector<float> _vctr;
};

#endif