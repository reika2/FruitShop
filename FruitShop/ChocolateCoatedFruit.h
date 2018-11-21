#pragma once
#include "IProduct.h"
#include "IFruit.h"
#include "Chocolate.h"
#include <string>


class ChocolateCoatedFruit :
	public IProduct
{
public:
	ChocolateCoatedFruit() = default;
	~ChocolateCoatedFruit() = default;
	ChocolateCoatedFruit(IFruit fruit, Chocolate chocolate);

	double cost() const override;
	void getDescription() const override;

private:

	IFruit m_ifruit;
	Chocolate m_chocolate;

};

