#include "DiscountBase.h"


void DiscountBase::SetCategory(string category)
{
	this->_category = category;
}

string DiscountBase::GetCategory()
{
	return this->_category;
}

DiscountBase::DiscountBase(string category) 
{
	SetCategory(category);
}


void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	for (int i = 0; i < productsCount; i++)
	{
		cout << products[i].GetName() << " " << "Old Cost: " << products[i].GetPrice() 
			<< " " << "New Cost: " << discount->Calculate(&products[i]) << endl;
	}
}