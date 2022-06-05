#pragma once
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
private:
	int _amount;

public:
	void SetAmount(int amount);
	int GetAmount();
	CertificateDiscount(string category, int amount);
	double Calculate(Product* product) override;
};