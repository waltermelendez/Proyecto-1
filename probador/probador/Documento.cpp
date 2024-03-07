#include "Documento.h"
#include <string>
using namespace std;
Documento::Documento(int id, string titulo, string materia, int cantidad, bool estado) {
     Identificador = id;
     Titulo = titulo;

     Materia = materia;
     Cantidad_Ejemplares = cantidad;
     Estado = estado;
}
Documento::Documento() {
    this->Identificador = 0;
    this->Estado = 0;
    this->Materia = " ";
    this->Cantidad_Ejemplares = 0;
    this->Titulo = " ";
}
//Getters
int Documento::GetId() {
    return Identificador;
}
string Documento::GetTitulo() {
    return Titulo;
}

string Documento::GetMateria() {
    return Materia;
}
int Documento::GetCantidad() {
    return Cantidad_Ejemplares;
}
bool Documento::GetEstado() {
    return Estado;
}
//Setters
void Documento::SetId(int id) {
    this->Identificador = id;
}
void Documento::SetTitulo(string titulo) {
    this->Titulo = titulo;
}

void Documento::SetMateria(string materia) {
    this->Materia = materia;
}
void Documento::SetCantiad(int cantidad) {
    this->Cantidad_Ejemplares = cantidad;
}
void Documento::SetEstado(bool estado) {
    this->Estado = estado;
}
