#pragma once
#include "IO.h"

class DistanteCalculatedBase
{
public:
	double virtual Calculate(double time) = 0;
};