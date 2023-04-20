#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(int cantidadParticipacionesEnIronMan, int cantidadTriatlonesGanados)
	:cantidadParticipacionesEnIronMan(cantidadParticipacionesEnIronMan),cantidadTriatlonesGanados(cantidadTriatlonesGanados)
{
}

Triatlonista::~Triatlonista()
{
}

string Triatlonista::toString()
{
	stringstream r;
	r << "Cantidad de participaciones en ironman: " << cantidadParticipacionesEnIronMan << endl;
	r << "Cantidad dr Triatlones ganados: " << cantidadTriatlonesGanados << endl;
	return r.str();
}
