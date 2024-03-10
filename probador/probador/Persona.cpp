#include "Persona.h"



// Constructor
Persona::Persona(int id, const std::string& nombre, const std::string& direccion)
    : id(id), nombre(nombre), direccion(direccion) {}

// Getters
int Persona::getId() const {
    return id;
}

const std::string& Persona::getNombre() const {
    return nombre;
}

const std::string& Persona::getDireccion() const {
    return direccion;
}
