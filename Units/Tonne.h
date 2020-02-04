#pragma once
#include "MassBase.h"

class Tonne final : public MassBase
{
public:
	Tonne(double tonnes) :MassBase(tonnes * 1000) {}
	Tonne(const MassBase& mass) :MassBase(mass) {}

	friend std::ostream& operator<< (std::ostream& os, const Tonne& tonnes)
	{
		return os << tonnes.m_kg / 1000 << "t";
	}
};

Tonne operator"" _t(long double val)
{
	return Tonne(val);
}

Tonne operator"" _t(unsigned long long val)
{
	return Tonne(val);
}