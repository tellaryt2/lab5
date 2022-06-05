#include "AcceleratedDistanceCalculator.h"

void AcceleratedDistanceCalculator::SetSpeed(double speed)
{
	_speed = speed;
}

void AcceleratedDistanceCalculator::SetAcceliration(double acceliration)
{
	_acceleration = acceliration;
}

double AcceleratedDistanceCalculator::GetSpeed()
{
	return _speed;
}

double AcceleratedDistanceCalculator::GetAcceliration()
{
	return _acceleration;
}

double AcceleratedDistanceCalculator::Calculate(double time)
{
	double s;
	s = (_speed * time) + ((_acceleration * time * time) / 2);
	return s;
}

AcceleratedDistanceCalculator::AcceleratedDistanceCalculator(double speed, double acceliration)
{
	_speed = speed;
	_acceleration = acceliration;
}
