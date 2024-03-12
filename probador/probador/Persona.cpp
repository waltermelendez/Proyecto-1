#include "Persona.h"

#include <string>
using namespace std;
// Constructor
Persona::Persona(int id, string nombre, string direccion) {
    this->direccion = direccion;
    this->id = id;
    this->nombre = nombre;
}
Persona::Persona() {
    direccion = " ";
    id = 0;
    nombre = " ";
}
// Getters
int Persona::getId()  {
    return id;
}

string Persona::getNombre()  {
    return nombre;
}

string Persona::getDireccion()  {
    return direccion;
}
//setters
void Persona::Setdireccion(string direccion) {
    this->direccion = direccion;
}
void Persona::SetNombre(string nombre){
    this->nombre = nombre;
}
void Persona::SetId(int id){
    this->id = id;
}
