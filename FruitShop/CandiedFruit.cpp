#include "CandiedFruit.h"
#include <iostream>


CandiedFruit::CandiedFruit(IFruit fruit, Sugar sugar) : m_ifruit{ fruit }, m_sugar{ sugar }{}

double CandiedFruit::cost() const
{
	return m_ifruit.cost() + m_sugar.cost();
}


void CandiedFruit::getDescription() const 
{
	std::cout << "Candied Fruit" << '\n';
}
