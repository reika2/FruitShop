#pragma once
#include "IFruit.h"
#include <string>
using std::string;

class Apple :
	public IFruit
{
public:
	Apple() = default;
	Apple(double price);

	~Apple() = default;
	
	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};

