#include "Chocolate.h"
#include <iostream>

Chocolate::Chocolate(double price): m_price{price}{}

double Chocolate::cost() const
{
	return m_price;
}

void Chocolate::getDescription() const
{
	std::cout << "Chocolate coated" << '\n';
}
