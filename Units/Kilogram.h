#pragma once
#include "MassBase.h"

class Kilogram final : public MassBase
{
public:
	Kilogram(double kg) :MassBase(kg) {}
	Kilogram(const MassBase& mass) :MassBase(mass) {}
};

Kilogram operator"" _kg(long double val)
{
	return Kilogram(val);
}

Kilogram operator"" _kg(unsigned long long val)
{
	return Kilogram(val);
}