#pragma once

#include <string>
using namespace std;
class Persona {
protected:
    int id;
    string nombre;
    string direccion;

public:
    // Constructor
    Persona(int id, string nombre, string direccion);
    Persona();
    // Getters
    int getId() ;
    string getNombre() ;
    string getDireccion() ;
    //getters
    void SetId(int id);
    void SetNombre(string nombre);
    void Setdireccion(string direcccion);

};
