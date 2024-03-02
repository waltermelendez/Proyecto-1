#pragma once
#include <string>
using namespace std;
class Documento
{
    int Identificador;
    string Titulo;
    //string Autor;
   // string Editorial;
    string Materia;
    int Cantidad_Ejemplares;
    bool Estado;
public:
    //Constructor
    Documento(int id, string titulo, string materia, int cantidad, bool estado);
    //Getters y Setters
    int GetId();
    void SetId(int id);
    string GetTitulo();
    void SetTitulo(string titulo);

    string GetMateria();
    void SetMateria(string materia);
    int GetCantidad();
    void SetCantiad(int cantidad);
    bool GetEstado();
    void SetEstado(bool estado);
};

