#pragma once
#include "Clientes.h"
#include "ManejoSimpleFechas.h"
#include <iostream>
using namespace std;
class Cursos
{
public:
	Cursos();
private:
	string descripcion;
	char nivel;
	ManejoSimpleFechas* fecha; 
	//como podemos llamar el horario? creamos una clase hora?
	int cupoMaximo;
	Clientes* reserva;
};

