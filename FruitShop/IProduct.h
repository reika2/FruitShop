#pragma once
class IProduct
{
public:
	IProduct() = default;
	virtual ~IProduct() = default;
	virtual double cost() const = 0;
	virtual void getDescription() const = 0;

};
