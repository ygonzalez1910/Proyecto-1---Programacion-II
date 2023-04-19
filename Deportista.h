#pragma once
#include "Fecha.h"
#include <iostream>
using namespace std;
class Deportista
{
public:
	Deportista(string, string, string, Fecha*);
	virtual ~Deportista();
	virtual string toString() const;
private:
	string cedula;
	string nombre;
	string numeroTelefono;
	Fecha* fechaNacimiento;
};

