#include "Cliente.h"
#include <string>
using namespace std;


// Constructor
Cliente::Cliente(int id, string nombre, string direccion, int publicacion_presta) : Persona(id, nombre, direccion) {

this->publicacion_presta = publicacion_presta;

}
Cliente::Cliente() :Persona(){
   this->publicacion_presta = 0;
}
// Getter
int Cliente::Getpublicacion_presta() {
    return publicacion_presta;
}
//Setter
void Cliente::setPublicacion_presta(int publicacion_presta) {
    this->publicacion_presta = publicacion_presta;
}
// Puedes implementar funciones específicas para los clientes si es necesario


