#include "Articulo.h"
using namespace std;
#include <string>
Articulo::Articulo(int id, string titulo, string materia, int cantidad, bool estado, string arbitro) :Documento(id, titulo, materia, cantidad, estado)
{

	Arbitro = arbitro;
}
string Articulo::GetArbitro() {
	return Arbitro;
}
void Articulo::SetArbitro(string arbitro) {
	this->Arbitro = arbitro;
}
Articulo::Articulo() :Documento()
{

	this->Arbitro = " ";
}
