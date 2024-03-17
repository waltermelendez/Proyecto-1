#pragma once
#include"Persona.h"
#include <string>
#include <vector>

using namespace std;


class Cliente : public Persona {
private:
    int publicacion_presta;
    double multas;

public:
    // Constructor
    Cliente(int id, string nombre, string direccion, int publicacion_presta, double multas);
    Cliente();

    // Getter
    int Getpublicacion_presta();
    double GetMulta();
    // Setter
    void setPublicacion_presta(int publicacion_presta);
    void SetMulta(double multa);
    // Método para registrar un cliente
    void RegistrarCliente(string nombreCliente, string NombreLibro, int cantidad, int Id);
    
};