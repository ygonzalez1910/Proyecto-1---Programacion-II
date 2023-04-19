#pragma once
#include <iostream>
using namespace std;
class Ciclista
{
public: 
	Ciclista(int, double);
	~Ciclista();
	string toString();

private:
	int horasEntrenamiento;
	double temPromedio;
};

