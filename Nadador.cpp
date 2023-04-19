#include "Nadador.h"
#include <sstream>
Nadador::Nadador(double masaMuscular, double peso, double porcentajeGrasaCorporal)
	:masaMuscular(masaMuscular), peso(peso),porcentajeGrasaCorporal(porcentajeGrasaCorporal)
{
}

string Nadador::toString()
{
	stringstream r;
	r << "Masa muscular: " << masaMuscular << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje grasa corporal: " << porcentajeGrasaCorporal << endl;
	return r.str();
}
