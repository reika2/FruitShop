#pragma once
#include "IProduct.h"

class Fruit :
	public IProduct
{
public:
	Fruit() = default;
	Fruit(double price, string description);
	virtual ~Fruit() = default;
	double cost() const;
	string getDescription() const;

private:
	double m_price;
	string m_description;
};