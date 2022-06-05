#include "PercentDiscount.h"

void PercentDiscount::SetPercent(int percent)
{
	bool tempPercent = percent > 0 || percent <= 100;
	while (!tempPercent)
	{
		cout << "Значение скидки должно быть в диапазоне от 0 до 100" << endl;
		cout << "Повторите ввод: ";
		cin >> percent;
		if ((percent > 0) && (percent <= 100))
		{
			tempPercent = true;
		}
	}
	this->_percent = percent;
}

int PercentDiscount::GetPercent()
{
	return this->_percent;
}

PercentDiscount::PercentDiscount(string category, int percent) :DiscountBase(category) {
	SetPercent(percent);
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		if (this->_percent <= 100)
		{
			return (product->GetPrice() - ((product->GetPrice() * this->_percent) / 100));
		}
		else
		{
			return 0;
		}

	}
	else {
		return product->GetPrice();
	}
}
