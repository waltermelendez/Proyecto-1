#include "Cliente.h"
#include <iostream>

using namespace std;

// Implementaci�n del constructor
Cliente::Cliente(int id, string nombre, string direccion, int publicacion_presta) : Persona(id, nombre, direccion) {
    this->publicacion_presta = publicacion_presta;
}

// Implementaci�n del constructor predeterminado
Cliente::Cliente() : Persona() {
    this->publicacion_presta = 0;
}

// Implementaci�n del getter
int Cliente::Getpublicacion_presta() {
    return publicacion_presta;
}

// Implementaci�n del setter
void Cliente::setPublicacion_presta(int publicacion_presta) {
    this->publicacion_presta = publicacion_presta;
}

// M�todo para registrar un cliente
void Cliente::RegistrarCliente(string nombreCliente, string NombreLibro, int cantidad, int Id) {
    cout << "Nombre: " << nombreCliente << ", ID: " << Id << endl;
    cout << "Cantidad de libros prestados: " << cantidad << endl;
    cout << "Nombre del libro a prestar: " << NombreLibro << endl;

    // Crear un nuevo cliente con los datos proporcionados
    Cliente nuevoCliente(Id, nombreCliente, "Direcci�n de ejemplo", cantidad);

    // Agregar el nuevo cliente al vector clientes
    clientes.push_back(nuevoCliente);

    // Imprimir un mensaje indicando que el cliente ha sido registrado
    cout << "Cliente registrado exitosamente." << endl;
}