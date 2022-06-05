#include "Product.h"

void Product::SetName(string name)
{
	this->_name = name;
}

void Product::SetCategory(string category)
{
	this->_category = category;
}

void Product::SetPrice(int price)
{
	bool checkPrice = price > 0 || price < 100000;
	while (!checkPrice)
	{
		cout << "Стоимость не может быть отрицательной, а также превышать 100 000" << endl;
		cout << "Повторите ввод: ";
		cin >> price;
		if (price > 0 && price < 100000)
		{
			checkPrice = true;
		}
	}
	this->_price = price;
}

string Product::GetCategory() {
	return this->_category;
}

string Product::GetName() {
	return this->_name;
}

int Product::GetPrice()
{
	return this->_price;
}

Product::Product(string name, string category, int price)
{
	SetName(name);
	SetCategory(category);
	SetPrice(price);
}

Product::Product()
{

}