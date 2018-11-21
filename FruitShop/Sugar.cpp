#include "Sugar.h"]
#include <iostream>

Sugar::Sugar(double price): m_price{price}{}

double Sugar::cost() const
{
	return m_price;
}


string Sugar::getDescription() const
{
	return "Sugar";
}
