#pragma once
#include "Deportista.h"
class Triatlonista : public Deportista
{
public:
	Triatlonista(int,int);
	~Triatlonista();
	string toString();
private:
	int cantidadParticipacionesEnIronMan;
	int cantidadTriatlonesGanados;
};

