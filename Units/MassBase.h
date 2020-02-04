#pragma once

#include<iostream>

class MassBase
{
protected:
	double m_kg;

	MassBase() = delete;
	MassBase(double kg) :m_kg(kg) {}

public:
	MassBase operator+ (const MassBase& mass) const;

	const static MassBase Zero;

	friend std::ostream& operator<< (std::ostream& os, const MassBase& mass)
	{
		return os << mass.m_kg << "kg";
	}
};

