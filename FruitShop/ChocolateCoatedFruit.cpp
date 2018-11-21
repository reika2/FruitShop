#include "ChocolateCoatedFruit.h"
#include <iostream>


ChocolateCoatedFruit::ChocolateCoatedFruit(IFruit fruit, Chocolate chocolate): m_ifruit{fruit}, m_chocolate{chocolate}{}


double ChocolateCoatedFruit::cost() const
{
	return m_ifruit.cost() + m_chocolate.cost();
}

void ChocolateCoatedFruit::getDescription() const
{
	std::cout << "Chocolate coated Fruit!" << '\n';
}