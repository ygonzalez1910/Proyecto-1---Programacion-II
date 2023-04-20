#pragma once
#include "ManejoSimpleFechas.h"
#include <iostream>
using namespace std;
class Deportista
{
public:
	Deportista(string, string, string, ManejoSimpleFechas*); //aqui estaba la clase fecha 
	//pero usted dijo que la eliminaramos, aunque creo que es mejor trabajar con Fecha
	//que con ManejoSimpleFecha
	virtual ~Deportista();
	virtual string toString() = 0; //creo que aqui va = 0 en vez de const pq es la primera clase que va a tener los metodos, ya en las otras si va const
private:
	string cedula;
	string nombre;
	string numeroTelefono;
	ManejoSimpleFechas* fechaNacimiento;
};

