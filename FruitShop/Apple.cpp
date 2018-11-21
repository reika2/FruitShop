#include "Apple.h"
#include <iostream>;

Apple::Apple(double price):m_price{price}{}


double Apple::cost() const
{
	return m_price;
}

void Apple::getDescription() const
{
	std::cout << m_description << '\n';
}
