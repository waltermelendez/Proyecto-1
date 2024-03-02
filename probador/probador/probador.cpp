// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include"Revista.h"
using namespace std;
class Animal {
protected:
    std::string nombre;

public:
    Animal(std::string nombre) {}

    // Getter
    std::string getNombre()  {
        return nombre;
    }

    // Setter
    void setNombre( std::string nuevoNombre) {
        nombre = nuevoNombre;
    }
};
class Perro : public Animal {
private:
    int edad;

public:
    Perro(std::string nombre, int edad) : Animal(nombre) {}

    // Getter de la clase derivada (sobrescrito)
    int getEdad()  {
        return edad;
    }

    // Setter de la clase derivada (sobrescrito)
    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }
};
int main()
{
    Perro* mi = new Perro("",0);
    
    mi->setEdad(1);
    mi->setNombre(" fran");
    cout << mi->getEdad() << " " << mi->getNombre() << endl;
    cout<<"-----------\n";
    mi->setEdad(10);
    mi->setNombre(" ffran");
    cout << mi->getEdad() << " " << mi->getNombre() << endl;
    Articulo* uno = new Articulo(1," "," ",0,0," ");
    cout << "prueba\n";
    uno->SetId(45);
    cout << uno->GetId() << " articulo\n";
   
    Revista* primera = new Revista(1," "," ",0,0,0,0);
    primera->SetNumero(455566);
    cout << "rpimera " << primera->GetNumero()<<endl;
    return 0;

}
