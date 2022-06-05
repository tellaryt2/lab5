#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(int amount)
{
	bool tempAmount = amount > 0 || amount <= 10000;
	while (!tempAmount)
	{
		cout << "Значение скидки должно быть в диапазоне от 0 до 10000" << endl;
		cout << "Повторите ввод: ";
		cin >> amount;
		if ((amount > 0) && (amount <= 10000))
		{
			tempAmount = true;
		}
	}
	this->_amount = amount;
}

int CertificateDiscount::GetAmount() {
	return this->_amount;
}

CertificateDiscount::CertificateDiscount(string category, int amount) :DiscountBase(category) {
	SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product) {
	if (product->GetCategory() == this->GetCategory())
	{
		if (this->_amount >= product->GetPrice())
		{
			return 0;
			this->_amount = _amount - product->GetPrice();
		}
		else
		{
			return product->GetPrice() - this->_amount;
			this->_amount = 0;
		}
	}
	else {
		return product->GetPrice();
	}
}