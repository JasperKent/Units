#include "WeighingMachine.h"
#include <numeric>

using namespace std;

WeighingMachine& WeighingMachine::addItem(MassBase mass)
{
	m_items.push_back(mass);

	return *this;
}

MassBase WeighingMachine::getTotal() const
{
	return accumulate(m_items.begin(), m_items.end(), MassBase::Zero);
}
