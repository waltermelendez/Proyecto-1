#pragma once
#include"Documento.h"
#include<string>
using namespace std;
class Libro: public Documento
{
private:
	string Editorial;
	string _Autor;
public:
	Libro(int id, string titulo, string materia, int cantidad, bool estado, string editorial, string autor);
	string GetAutor();
	void SetAutor(string autor);
	string GetEditorial();
	void SetEditorial(string editorial);
	Libro();
};

