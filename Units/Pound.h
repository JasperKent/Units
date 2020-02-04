#pragma once
#include "MassBase.h"

class Pound final : public MassBase
{
public:
	Pound(const MassBase& mass) :MassBase(mass) {}
	Pound(double pounds) :MassBase(pounds * 0.453592) {}

	friend std::ostream& operator<< (std::ostream& os, const Pound& pounds)
	{
		return os << pounds.m_kg / 0.453592 << "lbs";
	}
};

Pound operator"" _lbs(long double val)
{
	return Pound(val);
}

Pound operator"" _lbs(unsigned long long val)
{
	return Pound(val);
}
