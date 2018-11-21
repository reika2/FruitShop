#pragma once
#include "IProduct.h"
#include <string>

using std::string;

class IFruit :
	public IProduct
{
public:
	IFruit() = default;
	IFruit(double price, string description);
	
	virtual ~IFruit() = default;

	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};

IFruit::IFruit(double price, string description): m_price{price}, m_description{description}{}

double IFruit::cost() const
{
	return m_price;
}

void IFruit::getDescription() const
{
	std::cout << m_description << '\n';
}