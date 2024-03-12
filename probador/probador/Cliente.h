#pragma once



#include "persona.h"
#include <string>
using namespace std;
class Cliente : public Persona {
private:
    int publicacion_presta;

public:
    // Constructor
    Cliente(int id, string nombre, string direccion, int cantidad);
    Cliente();
    // Getter
    int Getpublicacion_presta();
    
    //Setter
    void setPublicacion_presta(int cantidad);
    // Puedes agregar funciones específicas para los clientes
};

