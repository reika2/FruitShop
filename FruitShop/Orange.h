#pragma once
#include "IFruit.h"
class Orange :
	public IFruit
{
public:
	Orange() = default;
	Orange(double price);
	
	~Orange() = default;

	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
};

