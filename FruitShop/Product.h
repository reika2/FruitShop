#pragma once
#include "IProduct.h"
#include <string>
using std::string;

class Product :
	public IProduct
{
public:
	Product() = default;
	Product(double price, string description);

	~Product() = default;

	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_product;

};

