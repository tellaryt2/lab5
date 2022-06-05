#pragma once
#include "IO.h"
#include "DistanteCalculatorBase.h"

class AcceleratedDistanceCalculator : public DistanteCalculatedBase
{
private:
	double _speed;
	double _acceleration;

public:
	void SetSpeed(double speed);
	void SetAcceliration(double acceliration);
	double GetSpeed();
	double GetAcceliration();
	double Calculate(double time);
	AcceleratedDistanceCalculator(double speed, double acceliration);
};