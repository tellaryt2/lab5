#pragma once
#include "Product.h"

//����������� ����� - � ����� ����������� ��-����
class DiscountBase
{
private:
	string _category;
	void SetCategory(string category);

public:
	string GetCategory();
	double virtual Calculate(Product* product) = 0;

protected:
	DiscountBase(string category);
};


void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount);