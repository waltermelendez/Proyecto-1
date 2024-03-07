#include "Revista.h"
#include <string>
using namespace std;
Revista::Revista(int id, string titulo, string materia, int cantidad, bool estado, int anio, int numero) : Documento(id, titulo, materia, cantidad, estado)
{
	this->Anio = anio;
	this->Numero = numero;
}
int Revista::GetAnio() {
	return Anio;
}
void Revista::SetAnio(int anio) {
	this->Anio = anio;
}
int Revista::GetNumero() {
	return Numero;
}
void Revista::SetNumero(int numero) {
	this->Numero = numero;
}
Revista::Revista() :Documento() {
	this->Anio = 0;
	this->Numero = 0;
}