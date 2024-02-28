
using namespace std;
#include <iostream>

//Menu de publicaciones
void menu() {
    int opcion;
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
            registrarPublicacion();
            break;
        case 2:
            registrarCliente();
            break;
        case 3:
            realizarPrestamo();
            break;
        case 4:
            devolverPublicacion();
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

//Menu de Multas
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
            reportePrestamos();
            break;
        case 2:
            reporteClientesPrestamos();
            break;
        case 3:
            reporteMorososMultas();
            break;
        case 4:
            reportePublicaciones();
            break;
        case 5:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 5);
}

int main()
{//Este es el archivo en donde vamos a empezar a hacer el proeycto.
    std::cout << "Hello World!\n";
}
