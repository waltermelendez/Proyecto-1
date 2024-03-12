#include "Admin.h"
#include <string>
using	namespace std;
//Constructores
Admin::Admin(int id, string nombre, string direccion):Persona(int id, string nombre, string direccion) {
	this->id = id;
	this->nombre = nombre;
	this->direccion = direccion;
}
Admin::Admin():Persona {
	this->id = 0;
	this.nombre = " ";
	this->direccion = " ";
}
//  implementar funciones específicas para los administradores si es necesario
