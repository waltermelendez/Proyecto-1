#pragma once



#include "persona.h"
#include <string>
using namespace std;
class Cliente : public Persona {
private:
    int publicacion_presta;

public:
    // Constructor
    Cliente(int id, string nombre, string direccion, int publicacion_presta);
    Cliente();
    // Getter
    int Getpublicacion_presta();
    
    //Setter
    void setPublicacion_presta(int publicacion_presta);
    // Puedes agregar funciones específicas para los clientes

    //metodos de registro
    void RegistarCliente(string nombreCliente, string NombreLibro, int cantidad, int Id);
   
};

