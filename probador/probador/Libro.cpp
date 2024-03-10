#include "Libro.h"
#include <string>
using namespace std;
Libro::Libro(int id, string titulo, string materia, int cantidad, bool estado, string autor, string editorial) :Documento(id, titulo, materia, cantidad, estado)
{
	this->Editorial = editorial;
	this->_Autor = autor;
}
string Libro::GetEditorial() {
	return Editorial;
}
void Libro::SetEditorial(string editorial) {
	this->Editorial = editorial;
}
string Libro::GetAutor() {
	return _Autor;
}
void Libro::SetAutor(string autor) {
	_Autor = autor;
}
Libro::Libro() :Documento() {

	this->Editorial = " ";
	this->_Autor ="";
}
