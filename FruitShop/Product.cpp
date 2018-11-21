#include "Product.h"
#include "IFruit.h"
#include <iostream>
using std::string;

Product::Product(double price, string description): m_price{price}, m_description{description}{}

double Product::cost() const
{
	return m_fruit.cost()+
}


