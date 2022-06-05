#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase {
private:
	int _percent;

public:
	void SetPercent(int percent);
	int GetPercent();
	PercentDiscount(string category, int percent);
	double Calculate(Product* product) override;
};