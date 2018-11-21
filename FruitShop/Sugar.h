#pragma once
#include "IProduct.h"
#include <string>
using std::string;

class Sugar :
	public IProduct
{
public:
	Sugar() = default;
	Sugar(double price);
	
	~Sugar() = default;
	
	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};

