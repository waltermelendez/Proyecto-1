#include "Admin.h"
#include <string>
using	namespace std;
//Constructores
Admin::Admin(int id, string nombre, string direccion):Persona( id,  nombre,  direccion) {
	
}
Admin::Admin():Persona() {

}
//  implementar funciones específicas para los administradores si es necesario
