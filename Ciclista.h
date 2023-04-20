#pragma once
#include "Deportista.h"

class Ciclista : public Deportista
{
public: 
	Ciclista(int, double);
	~Ciclista();
	string toString();

private:
	int horasEntrenamiento;
	double temPromedio;
};

