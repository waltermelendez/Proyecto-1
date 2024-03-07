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
			string docu, /*consigue los datos =>*/dato;
			int num;
			int cantidadL = 0;//canitdad de REAL de libros
			int cantidadA = 0;//canitdad de REAL de Articulos
			int cantidadR = 0;//cantidad REAL de Revistas
			bool est, ver = false;
			Revista nuevarevista[1];
			Libro nuevolibro[1];
			Articulo nuevoarticulo[1]
				switch (docu);
			{
				case "libro":
					do {
						cout << "de un nombre del autor del libro\n"
							cin >> dato;
						nuevolibro[1 + cantidadL].SetAutor(dato);
						cout << "de el nombre del libro\n";
						cin >> dato;
						nuevolibro[1 + cantidadL].SetTitulo();
						cout << "de el numero de libros disponibles\n";
						cin >> mun;
						nuevolibro[1 + cantidadL].SetCantiad(num);
						cout << "de el numero de id del numero\n";
						cin >> num;
						nuevolibro[1 + cantidadL].SetId(num);
						cout << "de la materia del libro \n";
						cin >> dato;
						nuevolibro[1 + cantidadL].SetMateria(dato);
						cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
						cin >> est;
						cout << "de la editorial del libro \n";
						cin >> dato;
						nuevolibro[1 + cantidadL].SetEditorial(dato);
						cout << "Desea agregar otro libro?, 1 si 0 no\n";
						if (ver == true) {
							cantidadL++;
						}
					} while (ver == true)
						break;
				case "articulo":
					ver = false;
					do {
						cout << "de el arbitro del articulo\n"
							cin >> dato;
						nuevoarticulo[1+cantidadA].SetArbitro(dato);

						cout << "de el numero de articulos disponibles\n";
						cin >> mun;
						nuevoarticulo[1+cantidadA].SetCantiad(num);
						cout << "de el numero de id del numero\n";
						cin >> num;
						nuevoarticulo[1+cantidadA].SetId(num);
						cout << "de la materia del libro \n";
						cin >> dato;
						nuevolibro[1+cantidadA].SetMateria(dato);
						cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
						cin >> est;
						nuevoarticulo[1+cantidadA].SetEstado(est);
						cout << "de el titulo del articulo\n";
						cin >> dato;
						nuevoarticulo[1].SetTitulo(dato);
						cout << "Desea agregar otro articulo?, 1 si 0 no\n";
						if (ver == true) {
							cantidadA++;
						}
					} while (ver == true)
					
					break;
				case "revista":

					do {
						cout << "de el nombre de la revista\n";
						cin >> dato;
						nuevarevista[1+cantidadR].SetTitulo(dato);
						cout << "de el ID de la revista\n";
						cin >> dato;
						nuevarevista[1+cantidadR].SetId(dato);
						cout << "de la materia de la revista\n";
						cin >> dato;
						nuevarevista[1+cantidadR].SetMateria(dato);
						cout << "de la  cantidad de ejemplares en existencia de la revista\n";
						cin >> dato;
						nuevarevista[1+cantidadR].SetNumero(num);
						cout << "de el estado actual de la revista, 0  no disponible y 1 disponible\n";
						cin >> est;
						nuevarevista[1+cantidadR].SetEstado(est);
						cout << " De el anio de publicacion de la revista\n";
						cin >> dato;
						nuevarevista[1+cantidadR].SetAnio(docu);
						cout << "Desea agregar otro revista?, 1 si 0 no\n";
						if (ver == true) {
							cantidadR++;
						}
					} while (ver == true)
					
					break;
				default:
					cout << "Ese tipo de documento no existe\n";
					break;
			}
			//registrarPublicacion();
			break;
		case 2:
			//  registrarCliente();
			int numId;
			string nombre, direccion;
			cout << "Ingrese el número de identidad del cliente: ";
			cin >> numId;
			cout << "Ingrese el nombre del cliente: ";
			cin.ignore();
			getline(cin, nombre);
			cout << "Ingrese la dirección del cliente: ";
			getline(cin, direccion);
			clientes.push_back(new Cliente(numId, nombre, direccion));
			break;
		case 3:
			//  realizarPrestamo();
			int idCliente;
			string tipoPublicacion;
			cout << "Ingrese el ID del cliente: ";
			cin >> idCliente;
			// Verificar si el cliente existe
			bool clienteEncontrado = false;
			Cliente* cliente = nullptr;
			for (auto& c : clientes) {
				if (c->getNumId() == idCliente) {
					clienteEncontrado = true;
					cliente = c;
					break;
				}
			}
			if (!clienteEncontrado) {
				cout << "Cliente no encontrado." << endl;
				return;
			}

			cout << "Ingrese el tipo de publicación a prestar (libro, revista, articulo): ";
			cin >> tipoPublicacion;
			// Lógica para realizar el préstamo según el tipo de publicación
		}
		break;
        case 4:
			// devolverPublicacion();
			int idPrestamo;
			cout << "Ingrese el ID del préstamo a devolver: ";
			cin >> idPrestamo;
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
