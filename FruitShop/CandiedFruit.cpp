#include "CandiedFruit.h"

CandiedFruit::CandiedFruit(Fruit fruit, Sugar sugar) : m_fruit{ fruit }, m_sugar{ sugar }{}

double CandiedFruit::cost() const
{
	return m_fruit.cost() + m_sugar.cost();
}

string CandiedFruit::getDescription() const 
{
	return "Candied " + m_fruit.getDescription();
}
