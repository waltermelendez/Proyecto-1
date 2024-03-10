#pragma once

#include <string>

class Persona {
protected:
    int id;
    std::string nombre;
    std::string direccion;

public:
    // Constructor
    Persona(int id, const std::string& nombre, const std::string& direccion);

    // Getters
    int getId() const;
    const std::string& getNombre() const;
    const std::string& getDireccion() const;
};
