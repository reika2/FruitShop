#pragma once
#include "IProduct.h"
class Chocolate :
	public IProduct
{
public:
	Chocolate() = default;
	Chocolate (double price);

	~Chocolate() = default;

	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
};

