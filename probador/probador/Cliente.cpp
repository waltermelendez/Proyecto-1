#include "Cliente.h"



// Constructor
Cliente::Cliente(int id, const std::string& nombre, const std::string& direccion, int cantidad)
    : Persona(id, nombre, direccion), cantidadPublicacionesPrestamo(cantidad) {}

// Getter
int Cliente::getCantidadPublicacionesPrestamo() const {
    return cantidadPublicacionesPrestamo;
}

// Puedes implementar funciones específicas para los clientes si es necesario


