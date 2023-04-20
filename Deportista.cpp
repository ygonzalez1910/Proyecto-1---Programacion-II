#include "Deportista.h"
#include <sstream>
using std::stringstream;

Deportista::Deportista(string cedula, string nombre, string numeroTelefono, ManejoSimpleFechas* fechaNacimiento)
	:cedula(cedula), nombre(nombre),numeroTelefono(numeroTelefono),fechaNacimiento(fechaNacimiento)
{
}

Deportista::~Deportista()
{
}

string Deportista::toString() const
{
	stringstream r;
	r << "Cedula: " << cedula << endl;
	r << "Nombre: " << nombre << endl;
	r << "Numero telefonico: " << numeroTelefono << endl;
	r << "Fecha de Nacimiento: " << fechaNacimiento << endl;
	return r.str();
}
