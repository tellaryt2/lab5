#include "UniformDistanteCaluculator.h"

void UniformDistanteCalculator::SetSpeed(double speed)
{
	_speed = speed;
}

double UniformDistanteCalculator::GetSpeed()
{
	return _speed;
}

double UniformDistanteCalculator::Calculate(double time)
{
	return (_speed * time);
}

UniformDistanteCalculator::UniformDistanteCalculator(double speed)
{
	_speed = speed;
}
