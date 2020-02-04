#include "MassBase.h"

const MassBase MassBase::Zero(0.0);

MassBase MassBase::operator+(const MassBase& mass) const
{
	return MassBase(m_kg + mass.m_kg);
}
