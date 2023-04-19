#pragma once
#include <iostream>
using namespace std;
class Nadador
{
public:
	Nadador(double, double, double);
	string toString();
private:
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
};

