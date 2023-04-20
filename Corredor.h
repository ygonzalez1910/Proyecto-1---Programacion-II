#pragma once
#include "Deportista.h"

class Corredor : public Deportista
{
public:
	Corredor(char,double);
	string toString();
private:
	char sexo;
	double estatura;
};

