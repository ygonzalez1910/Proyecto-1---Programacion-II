#include "Corredor.h"
#include <sstream>

Corredor::Corredor(char sexo, double estatura)
	:sexo(sexo),estatura(estatura)
{
}

string Corredor::toString()
{
	stringstream r;
	r << "Sexo: " << sexo << endl;
	r << "Estatura: " << estatura << endl;
	return r.str();
}
