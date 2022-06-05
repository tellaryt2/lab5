#pragma once
#include "IO.h"

class Product 
{
private:
	string _name;
	string _category;
	int _price;
	enum CategoryType 
	{
		WATER,
		FOOD,
		OTHER
	};

public:
	void SetName(string name);
	void SetCategory(string surname);
	void SetPrice(int price);
	
	string GetName();
	string GetCategory();
	int GetPrice();

	Product(string name, string surname, int price);
	Product();
};

void DemoProduct();