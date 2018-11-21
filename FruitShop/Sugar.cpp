#include "Sugar.h"]
#include <iostream>

Sugar::Sugar(double price): m_price{price}{}

double Sugar::cost() const
{
	return m_price;
}


void Sugar::getDescription() const
{
	std::cout << "Candied" << std::endl;
}
