#pragma once
#include "IProduct.h"
#include "IFruit.h"
#include "Sugar.h"
#include <string>
using std::string;


class CandiedFruit :
	public IProduct
{
public:
	CandiedFruit() = default;
	~CandiedFruit() = default;
	CandiedFruit(IFruit fruit, Sugar sugar);

	double cost() const override;
	void getDescription() const override;

private:
	IFruit m_ifruit;
	Sugar m_sugar;

};

