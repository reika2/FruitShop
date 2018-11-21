#include "Fruit.h"
#include "CandiedFruit.h"
#include "Sugar.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;

int main()	
{
	Fruit apple{ 10.0, "Apple" };
	Sugar sugar{ 0.5 };
	CandiedFruit cf{ apple, sugar };
	cout << cf.getDescription() << '\n';
	return 0;

}