#include "Fruit.h"

Fruit::Fruit(double price, string description): m_price {price}, m_description{description}{}

double Fruit::cost() const
{
	return m_price;
}

string Fruit::getDescription() const
{
	return m_description;
}
