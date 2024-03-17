// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//	

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include"Revista.h"
#include <locale.h>
#include <vector>
using namespace std;
#include <cstdio>
#include <vector>
#include "Cliente.h"
#include "Admin.h"
#include"Persona.h"
//Pasos para usar con tortoise
//primero comit
//segundo PULL
//tercero PUSH

vector<Revista> nuevarevista;
vector<Libro> nuevolibro;
vector<Articulo> nuevoarticulo;
vector <Cliente> cliente;















void Menu_principal(string nombre, string contrasenia) {
	vector<Revista> nuevarevista;
	if (nombre == "adimin" && contrasenia == "ADMIN") {
		//Esto se va a usar para dividir el admin y el cliente
	}
	else {

	}
	setlocale(LC_ALL, "Spanish");
	

	int opc = 0;
	int cantidadL = 0;//canitdad de REAL de libros
	int cantidadA = 0;//canitdad de REAL de Articulos
	int cantidadR = 0;//cantidad REAL de Revistas
	int num = 0;//consigue los datos numericos  
	/*consigue los datos */
	string d;
	bool est = false;//consigue los datos de estado
	
	
	string dato;
	
	do {

		cout << "----- Menú Principal -----" << endl;
		cout << "1. Registrar publicacion" << endl;//adiminX
		cout << "2. Registrar cliente" << endl;//adiminX
		cout << "3. Realizar préstamo" << endl;//cliente
		cout << "4. Devolver publicación" << endl;//cliente
		cout << "5. Reportes" << endl;//admin
		cout << "6. Salir" << endl;
		cout << "Seleccione una opción: ";
		opc = opc;
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
				int i = 0;

				
				do {
					Libro libro;
				
					cout << "de un nombre del autor del libro\n";
					cin.ignore();
					getline(cin, dato);

					libro.SetAutor(dato);

					cout << "de el nombre del libro\n";

					getline(cin, dato);

					libro.SetTitulo(dato);
					cout << "de el numero de libros disponibles\n";
					cin >> num;
					libro.SetCantiad(num);
					cout << "de el numero de id del numero\n";
					cin >> num;
					libro.SetId(num);
					cout << "de la materia del libro \n";
					cin.ignore();
					getline(cin, dato);

					libro.SetMateria(dato);
					cout << "de estado de los libros, 0 no disponible y 1 disponilble \n";
					cin >> est;
					libro.SetEstado(est);
					cout << "de la editorial del libro \n";
					cin.ignore();
					getline(cin, dato);

					libro.SetEditorial(dato);
					nuevolibro.push_back(libro);
					i++;
				} while (i<cantidadL);
			}
			else if (docu == 'A' || docu == 'a') {
				
				int i = 0;
				cout << "diga una cantidad de  Articulos a agregar\n";
				cin >> cantidadA;
				do {
					Articulo articulo ;
					cout << "de el arbitro del articulo\n";
					cin >> dato;
					articulo.SetArbitro(dato);
					cout << "de el numero de articulos disponibles\n";
					cin >> num;
					articulo.SetCantiad(num);

					cout << "de el numero de id del numero\n";
					cin >> num;
					articulo.SetId(num);
					cout << "de la materia del articulos \n";
					cin >> dato;
					articulo.SetMateria(dato);
					cout << "de estado de los articluos, 0 no disponible y 1 disponilble \n";
					cin >> est;
					articulo.SetEstado(est);
					cout << "de el titulo del articulo\n";
					cin >> dato;
					articulo.SetTitulo(dato);
					i++;

				} while (i<cantidadA);
			}
			else if (docu == 'r' || docu == 'R')
			{
				
				cout << "Cuantas Revistas de sea agregar\n";
				cin >> cantidadR;
				system("cls");
				int i = 0;
				do {
					Revista revista;
					cout << "de el nombre de la revista\n";
					cin >> dato;
					revista.SetTitulo(dato);

					cout << "de el ID de la revista\n";
					cin >> num;
					revista.SetId(num);

					cout << "de la materia de la revista\n";
					cin >> dato;
					revista.SetMateria(dato);

					cout << "de la  cantidad de ejemplares en existencia de la revista\n";
					cin >> num;
					revista.SetNumero(num);

					cout << "de el estado actual de la revista, 0  no disponible y 1 disponible\n";
					cin >> est;
					revista.SetEstado(est);
					cout << " De el anio de publicacion de la revista\n";
					cin >> num;

					revista.SetAnio(num);
					
					i++;
				} while (i<cantidadR);
			}
			else {
				cout << "documento incorecto\n";
				break;
				system("pause");
				system("cls");
			}
			//registrarPublicacion();
			break;
		case 2:
			cout << "registro de cliente\n";

			
			int numId;
			string nombre, direccion;
			Cliente nuevoCliente;
			cout << "Ingrese el número de identidad del cliente: \n";
			cin >> numId;
			nuevoCliente.SetId(numId);
			cout << "Ingrese el nombre del cliente: \n";
			cin.ignore();
			getline(cin, nombre);
			nuevoCliente.SetNombre(nombre);
				cout << "Ingrese la dirección del cliente: \n";
			getline(cin, direccion);
			cliente.push_back(nuevoCliente);

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
			//cout << "menu de reportes\n";
			menuReportes();

			break;
		case 6:
			
			break;


		}

	} while (opc < 7);

}
void menuReportes() {
	int opcion;
	do {
		cout << "----- Menú de Reportes -----" << endl;
		cout << "1. Reporte de préstamos" << endl;//adminX copiar
		cout << "2. Reporte de clientes con préstamos" << endl;//adimin copiar ↑
		cout << "3. Reporte de morosos y multas" << endl;//adimin
		cout << "4. Reporte de publicaciones" << endl;//admin cliclo for
		cout << "5. Volver al menú principal" << endl;
		cout << "Seleccione una opción: \n";
		cin >> opcion;

		switch (opcion) {
		case 1:
			//Reporte de préstamos
			string tipo;
			int id = 0, nuLibro = 0, temp = 0, cli;
			cout << "que clase de documento va a registrar\n";
			cin >> tipo;
			cout << "ingrese el id del documento\n";
			cin >> id;
			if (tipo == "libro") {

				for (int i = 0; i < nuevolibro.size();i++) {
					if (nuevolibro[i].GetId() == id) {
						cout << "Su libro es " + nuevolibro[i].GetTitulo() + " de " + nuevolibro[i].GetAutor() << endl;
						cout << "cuantos libros desea prestar?\n";
						cin >> nuLibro;
						if (nuevolibro[i].GetEstado()) {
							temp = nuevolibro[i].GetCantidad();
							nuevolibro[i].SetCantiad(temp - nuLibro);
							if (nuevolibro[i].GetCantidad() < 0) {
								cout << "no hay sufientes libros o libros agotados\n";
								nuevolibro[i].SetEstado(0);
							}
							else {
								cout << "ingrese el numero id del cliente\n";
								cin >> cli;

								for (int i = 0;i < cliente.size();i++) {
									if (cli == cliente[i].getId()) {
										cout << "Sus libros han sido prestados a " << cliente[i].getNombre() << endl;
										cliente[i].setPublicacion_presta(nuLibro);
									}
								}


							}
						}
						else {
							cout << "Lo sentimos, su libro no esta disponible\n";
						}


					}

				}
			}

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
			system("pause");
			system("cls");

			break;
		
		}
	} while (opcion <= 5);
}
int main()
{
	string nombre, constrasenia;
	cout << "Nombre:\n";
	cin >> nombre;
	cout << "contrasenia:\n";
	cin >> constrasenia;

	Menu_principal(nombre, constrasenia);

	return 0;

}
