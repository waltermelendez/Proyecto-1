#pragma once
#include"Documento.h"
#include <string>
using namespace std;
class Revista : public Documento
{
private:
	int Anio;
	int Numero;
public:
	Revista(int id, string titulo, string materia, int cantidad, bool estado, int anio, int numero);
	int GetAnio();
	void SetAnio(int anio);
	int GetNumero();
	void SetNumero(int numero);
	Revista();
};