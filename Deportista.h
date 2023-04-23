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
	virtual string toStringDatosGenerales() = 0;
protected:
	string cedula;
	string nombre;
	string numeroTelefono;
	ManejoSimpleFechas* fechaNacimiento;
};

