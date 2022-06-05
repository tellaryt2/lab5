#pragma once
#include "DistanteCalculatorBase.h"

class UniformDistanteCalculator : public DistanteCalculatedBase
{
private:
	double _speed;

public:
	void SetSpeed(double speed);
	double GetSpeed();
	double Calculate(double time);
	UniformDistanteCalculator(double speed);
};