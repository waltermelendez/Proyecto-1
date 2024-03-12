#include "Cliente.h"
#include <string>
using namespace std;


// Constructor
Cliente::Cliente(int id, string nombre, string direccion, int cantidad) : Persona(id, nombre, direccion), {
this->id = id;
this->nombre = nombre;
this->direccion = direccion;
this->publicacion_presta = cantidad;

}
Cliente::Cliente():Persona {
    id = 0;
    nombre = " ";
    direccion = " ";
    publicacion_presta = 0;
}
// Getter
int Cliente::Getpublicacion_presta() {
    return cantidadPublicacionesPrestamo;
}
//Setter
void Cliente::SetCAntidadPublicacionesPrestamo(int cantidad) {
    this->cantidadPublicacionesPrestamo = cantidad;
}
// Puedes implementar funciones específicas para los clientes si es necesario


