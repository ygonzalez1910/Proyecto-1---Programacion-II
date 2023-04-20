#pragma once
#include "Deportista.h"

class Nadador : public Deportista
{
public: 
	Nadador(double, double, double);
	string toString();
private:
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
};

