#pragma once



#include "persona.h"

class Cliente : public Persona {
private:
    int cantidadPublicacionesPrestamo;

public:
    // Constructor
    Cliente(int id, const std::string& nombre, const std::string& direccion, int cantidad);

    // Getter
    int getCantidadPublicacionesPrestamo() const;

    // Puedes agregar funciones específicas para los clientes
};

