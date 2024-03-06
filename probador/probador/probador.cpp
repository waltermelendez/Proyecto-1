// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include"Revista.h"
using namespace std;



void menuReportes() {
    int opcion;
    do {
        cout << "----- Menú de Reportes -----" << endl;
        cout << "1. Reporte de préstamos" << endl;
        cout << "2. Reporte de clientes con préstamos" << endl;
        cout << "3. Reporte de morosos y multas" << endl;
        cout << "4. Reporte de publicaciones" << endl;
        cout << "5. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            //   reportePrestamos();
            break;
        case 2:
            //  reporteClientesPrestamos();
            break;
        case 3:
            //   reporteMorososMultas();
            break;
        case 4:
            //   reportePublicaciones();
            break;
        case 5:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 5);
}
void Menu_principal() {
    do {
        cout << "----- Menú Principal -----" << endl;
        cout << "1. Registrar publicación" << endl;
        cout << "2. Registrar cliente" << endl;
        cout << "3. Realizar préstamo" << endl;
        cout << "4. Devolver publicación" << endl;
        cout << "5. Reportes" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "que tipo de publicacion va a registar\n";
            string docu, dato;
            int num;
            bool est;
            Revista nuevarevista[1];
            Libro nuevolibro[1];
            Articulo nuevoarticulo[1]
            switch (docu);
            {
            case "libro":

                
                cout << "de un nombre del autor del libro\n"
                    cin >> dato;
                nuevolibro[1].SetAutor(dato);
                cout << "de el nombre del libro\n";
                cin >> dato;
                nuevolibro[1].SetTitulo();
                cout << "de el numero de libros disponibles\n";
                cin >> mun;
                nuevolibro[1].SetCantiad(num);
                cout << "de el numero de id del numero\n";
                cin >> num;
                nuevolibro[1].SetId(num);
                cout << "de la materia del libro \n";
                cin >> dato;
                nuevolibro[1].SetMateria(dato);
                cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
                cin >> est;
                cout << "de la editorial del libro \n";
                cin >> dato;
                nuevolibro[1].SetEditorial(dato);
                break;
            case "articulo":
                
                cout << "de el arbitro del articulo\n"
                    cin >> dato;
                nuevoarticulo[1].SetArbitro(dato);
               
                cout << "de el numero de articulos disponibles\n";
                cin >> mun;
                nuevoarticulo[1].SetCantiad(num);
                cout << "de el numero de id del numero\n";
                cin >> num;
                nuevoarticulo[1].SetId(num);
                cout << "de la materia del libro \n";
                cin >> dato;
                nuevolibro[1].SetMateria(dato);
                cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
                cin >> est;
                nuevoarticulo[1].SetEstado(est);
                cout << "de el titulo del articulo\n";
                cin >> docu;
                nuevoarticulo[1].SetTitulo(docu);
                break;
            case "revista":
                cout << "de el nombre de la revista\n";
                cin >> docu;
                nuevarevista[1].SetTitulo(docu);
                cout << "de el ID de la revista\n";
                cin >> docu;
                nuevarevista[1].SetId(docu);
                cout << "de la materia de la revista\n";
                cin >> docu;
                nuevarevista[1].SetMateria(docu);
                cout << "de la  cantidad de ejemplares en existencia de la revista\n";
                cin >> num;
                nuevarevista[1].SetNumero(num);
                cout << "de el estado actual de la revista, 0  no disponible y 1 disponible\n";
                cin >> est;
                nuevarevista[1].SetEstado(est);
                cout << " De el anio de publicacion de la revista\n";
                cin >> docu;
                nuevarevista[1].SetAnio(docu);
                break;
            default:
                cout << "Ese no es un tipo de documento\n";
                break;
            }
            //registrarPublicacion();
            break;
        case 2:
            //  registrarCliente();
            break;
        case 3:
            //  realizarPrestamo();
            break;
        case 4:
            // devolverPublicacion();
            break;
        case 5:
            menuReportes();
            break;
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 6);
}
}
int main()
{
    
    
    
    
    return 0;

}
