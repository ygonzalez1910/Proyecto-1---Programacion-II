#pragma once
#include "Lista.h"
#include "ManejoSimpleFechas.h"
#include <iostream>
using namespace std;
class Cursos
{
public:
	Cursos(string,char,ManejoSimpleFechas*,int,Lista*);
private:
	string descripcion;
	char nivel;
	ManejoSimpleFechas* fecha; 
	//como podemos llamar el horario? creamos una clase hora?
	int cupoMaximo;
	Lista* clientesReserva;
};

