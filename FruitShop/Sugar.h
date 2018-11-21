#pragma once
#include "IProduct.h"

class Sugar :
	public IProduct
{
public:
	Sugar() = default;
	explicit Sugar(double price);
	
	~Sugar() = default;
	
	double cost() const override;
	string getDescription() const override;

private:
	double m_price;
};

