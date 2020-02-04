#pragma once

#include <vector>
#include"MassBase.h"

class WeighingMachine
{
private:
	std::vector <MassBase> m_items;

public:
	WeighingMachine& addItem(MassBase mass);
	MassBase getTotal() const;
};

