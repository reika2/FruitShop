#pragma once
#include <string>

using std::string;

class IProduct
{
public:
	IProduct() = default;
	virtual ~IProduct() = default;
	virtual double cost() const = 0;
	virtual string getDescription() const = 0;
};
