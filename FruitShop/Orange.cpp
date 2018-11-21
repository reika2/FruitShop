#include "Orange.h"
#include <iostream>

Orange::Orange(double price): m_price{price}{}

double Orange::cost() const
{
	return m_price;
}

void Orange::getDescription() const
{
	std::cout << "Orange" << '\n';
}
