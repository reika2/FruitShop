#pragma once
#include "IProduct.h"
#include "Fruit.h"
#include "Sugar.h"

class CandiedFruit :
	public IProduct
{
public:
	CandiedFruit() = default;
	~CandiedFruit() = default;
	CandiedFruit(Fruit fruit, Sugar sugar);

	double cost() const override;
	string getDescription() const override;

private:
	Fruit m_fruit;
	Sugar m_sugar;

};

