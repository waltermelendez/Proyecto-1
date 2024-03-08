#include "Libro.h"
#include <string>
using namespace std;
Libro::Libro(int id, string titulo, string materia, int cantidad, bool estado, string editorial, string autor) :Documento(id, titulo, materia, cantidad, estado)
{
	this->Editorial = editorial;
	this->Autor = autor;
}
string Libro::GetEditorial() {
	return Editorial;
}
void Libro::SetEditorial(string editorial) {
	this->Editorial = editorial;
}
string Libro::GetAutor() {
	return Autor;
}
void Libro::SetAutor(string autor) {
	this->Autor = autor;
}
Libro::Libro() :Documento() {
	
	this->Editorial = " ";
	this->Autor = " ";
}
