#pragma once
#include <string>
#include "Documento.h"
using namespace std;
class Articulo :public Documento

{
private:
	string Arbitro;
public:
	string GetArbitro();
	void SetArbitro(string arbitro);
	Articulo(int id, string titulo, string materia, int cantidad, bool estado, string arbitro);
};

