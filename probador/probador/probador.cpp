// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include"Revista.h"
#include <locale.h>
using namespace std;
#include <cstdio>

//Pasos para usar con tortoise
//primero comit
//segundo PULL
//tercero PUSH



void menuReportes() {
	int opcion;
	do {
		cout << "----- Menú de Reportes -----" << endl;
		cout << "1. Reporte de préstamos" << endl;//admin
		cout << "2. Reporte de clientes con préstamos" << endl;//adimin
		cout << "3. Reporte de morosos y multas" << endl;//adimin
		cout << "4. Reporte de publicaciones" << endl;//admin
		cout << "5. Volver al menú principal" << endl;
		cout << "Seleccione una opción: \n";
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
			system("cls");

			break;
		default:
			cout << "Opción no válida. Inténtelo de nuevo." << endl;
			system("cls");
		}
	} while (opcion <= 5);
}

void Menu_principal(string nombre, string contrasenia) {
	if (nombre == "adimin" && contrasenia == "ADMIN") {

	}else{

	}
	setlocale(LC_ALL, "Spanish");
	Revista nuevarevista[1];
	Libro nuevolibro[1];
	Articulo nuevoarticulo[1];

	int opc=0;
	int cantidadL = 0;//canitdad de REAL de libros
	int cantidadA = 0;//canitdad de REAL de Articulos
	int cantidadR = 0;//cantidad REAL de Revistas
	int num = 0;//consigue los datos numericos  
	/*consigue los datos */
	string d;
	bool est = false;//consigue los datos de estado
	bool ver = false; // seguir agregando

	string dato ;
	string nombrelibro ;
	string Dato;
	string d2;
	do {
		
		cout << "----- Menú Principal -----" << endl;
		cout << "1. Registrar publicacion" << endl;//adimin
		cout << "2. Registrar cliente" << endl;//adimin
		cout << "3. Realizar préstamo" << endl;//cliente
		cout << "4. Devolver publicación" << endl;//cliente
		cout << "5. Reportes" << endl;//admin
		cout << "6. Salir" << endl;
		cout << "Seleccione una opción: ";
		opc =  opc;
		cin >> opc;
		
		system("cls");
		
		switch (opc) {
		case 1:
			char docu;
			cout << "que tipo de publicacion va a registar\n";
			cout << "1) libro\n";
			cout << "2) Articulo\n";
			cout << "3) REvista\n";
			cin >> docu;
			
			system("cls");
			if (docu == 'L' || docu == 'l') {
				cout << "cuando libros desea agregar\n";
				cin >> cantidadL;
				nuevolibro[0 + cantidadL];
				int i = 0;
				do {
					
					cout << "de un nombre del autor del libro\n";
					cin.ignore();
					getline(cin, dato);
					
					nuevolibro[0+ i].SetAutor(dato);

					cout << "de el nombre del libro\n";
					
					getline(cin, dato);
				
					nuevolibro[0 + i].SetTitulo(dato);
					cout << "de el numero de libros disponibles\n";
					cin >> num;
					nuevolibro[0 + i].SetCantiad(num);
					cout << "de el numero de id del numero\n";
					cin >> num;
					nuevolibro[0 + i].SetId(num);
					cout << "de la materia del libro \n";
					cin.ignore();
					getline(cin, dato);
					
					nuevolibro[0 + i].SetMateria(dato);
					cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
					cin >> est;
					nuevolibro[0 + i].SetEstado(est);
					cout << "de la editorial del libro \n";
					cin.ignore();
					getline(cin, dato);
					
					nuevolibro[0 + i].SetEditorial(dato);
					cout << "Desea agregar otro libro?, 1 si 0 no\n";
					cin >> ver;
					
				} while (cantidadL>i);
			}
			else if (docu == 'A' || docu == 'a') {
				ver = false;

				do {

					cout << "de el arbitro del articulo\n";
					cin >> Dato;
					nuevoarticulo[1 + cantidadA].SetArbitro(Dato);
					cout << "de el numero de articulos disponibles\n";
					cin >> num;
					nuevoarticulo[1 + cantidadA].SetCantiad(num);

					cout << "de el numero de id del numero\n";
					cin >> num;
					nuevoarticulo[1 + cantidadA].SetId(num);
					cout << "de la materia del articulos \n";
					cin >> Dato;
					nuevolibro[1 + cantidadA].SetMateria(Dato);
					cout << "de estado de los articluos, 0 no disponible y 1 disponilble \n";
					cin >> est;
					nuevoarticulo[1 + cantidadA].SetEstado(est);
					cout << "de el titulo del articulo\n";
					cin >> Dato;
					nuevoarticulo[1].SetTitulo(Dato);
					cout << "Desea agregar otro articulo?, 1 si 0 no\n";
					cin >> ver;
					if (ver) {
						cantidadA++;
						system("cls");
					}
				} while (ver);
			}
			else if (docu == 'r' || docu == 'R')
			{
				ver = false;
				system("cls");

				do {
					cout << "de el nombre de la revista\n";
					cin >> d2;
					nuevarevista[1 + cantidadR].SetTitulo(d2);

					cout << "de el ID de la revista\n";
					cin >> num;
					nuevarevista[1 + cantidadR].SetId(num);

					cout << "de la materia de la revista\n";
					cin >> d2;
					nuevarevista[1 + cantidadR].SetMateria(d2);

					cout << "de la  cantidad de ejemplares en existencia de la revista\n";
					cin >> num;
					nuevarevista[1 + cantidadR].SetNumero(num);

					cout << "de el estado actual de la revista, 0  no disponible y 1 disponible\n";
					cin >> est;
					nuevarevista[1 + cantidadR].SetEstado(est);
					cout << " De el anio de publicacion de la revista\n";
					cin >> num;

					nuevarevista[1 + cantidadR].SetAnio(num);
					cout << "Desea agregar otro revista?, 1 si 0 no\n";
					cin >> ver;
					if (ver) {
						cantidadR++;
					}
				} while (!ver);
			}
			else {
				cout << "documento incorecto\n";
				break;
			
				system("cls");
			}
			//registrarPublicacion();
			break;
		case 2:
			cout << "registro de cliente\n";
			
			/* registrarCliente();
		   int numId;
		   string nombre, direccion;
		   cout << "Ingrese el número de identidad del cliente: ";
		   cin >> numId;
		   cout << "Ingrese el nombre del cliente: ";
		   cin.ignore();
		   getline(cin, nombre);
		   cout << "Ingrese la dirección del cliente: ";
		   getline(cin, direccion);
		   clientes.push_back(new Cliente(numId, nombre, direccion));*/
		
			break;
		case 3:
			cout << "realizar prestamo\n";
			/* realizarPrestamo();
			int idCliente;
			string tipoPublicacion;
			cout << "Ingrese el ID del cliente: ";
			cin >> idCliente;
			 Verificar si el cliente existe
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
			}*/

			/*cout << "Ingrese el tipo de publicación a prestar (libro, revista, articulo): ";
			cin >> tipoPublicacion;*/
			// Lógica para realizar el préstamo según el tipo de publicación
			
			break;
		case 4:
			cout << "devoler publi\n";
			/* devolverPublicacion();
			int idPrestamo;
			cout << "Ingrese el ID del préstamo a devolver: ";
			cin >> idPrestamo;*/
			
			break;
		case 5:
			cout << "menu de reportes\n";
			//menuReportes();
			
			break;
		case 6:
			cout << "Saliendo del programa..." << endl;
			opc = 8;
			break;
		default:
			opc = 8;
			break;

		}
		
	} while (opc<=6);

}

int main()
{
	string nombre, constrasenia;
	cout << "Nombre:\n";
	cin >> nombre;
	cout << "contrasenia:\n";
	cin >> constrasenia;
	
	Menu_principal(string nombre, string constrsenia);

	return 0;

}
