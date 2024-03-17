#include "Cliente.h"
Cliente::Cliente(int id, string nombre, string direccion, int publicacion_presta, double multas) : Persona(id, nombre, direccion) {
    this->publicacion_presta = publicacion_presta;
    this->multas = multas;
}

// Implementaci�n del constructor predeterminado
Cliente::Cliente() : Persona() {
    this->publicacion_presta = 0;
    this->multas = 0;
}

// Implementaci�n del getter
int Cliente::Getpublicacion_presta() {
    return publicacion_presta;
}
double Cliente::GetMulta() {
    return multas;
}

// Implementaci�n del setter
void Cliente::setPublicacion_presta(int publicacion_presta) {
    this->publicacion_presta = publicacion_presta;
}
void Cliente::SetMulta(double multas) {
    this->multas = multas;
}