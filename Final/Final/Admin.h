#pragma once
#include "persona.h"
#include <string>
using namespace std;
class Admin : public Persona {

public:
    Admin();
    Admin(int id, string nombre, string direccion);
    // agregar funciones y datos miembro espec�ficos para los administradores
};

