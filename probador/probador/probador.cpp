// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include"Revista.h"
using namespace std;


int main()
{
    
    
    Libro libros[1];
    cout << "de un nombre\n";
    string a;
    cin >> a;
    for (int i = 0;i < 2;i++) {
        libros[i].SetAutor(a);
    }
    Articulo* uno = new Articulo(1," "," ",0,0," ");
    cout << "prueba\n";
    uno->SetId(45);
    cout << uno->GetId() << " articulo\n";
   
    Revista* primera = new Revista(1," "," ",0,0,0,0);
    primera->SetNumero(455566);
    cout << "rpimera " << primera->GetNumero()<<endl;
    return 0;

}
