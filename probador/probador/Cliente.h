#pragma once

#include "Persona.h"
#include <string>
#include <vector>

using namespace std;

// Declaraci�n adelantada de la clase Persona
class Persona;

// Declaraci�n adelantada del vector clientes
extern vector<Cliente> clientes;

class Cliente : public Persona {
private:
    int publicacion_presta;

public:
    // Constructor
    Cliente(int id, string nombre, string direccion, int publicacion_presta);
    Cliente();

    // Getter
    int Getpublicacion_presta();

    // Setter
    void setPublicacion_presta(int publicacion_presta);

    // M�todo para registrar un cliente
    void RegistrarCliente(string nombreCliente, string NombreLibro, int cantidad, int Id);
};


