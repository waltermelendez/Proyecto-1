// probador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//	

#include <iostream>
#include <string>
#include "Articulo.h"
#include "Documento.h"
#include "Libro.h"
#include "Prestamo.h"
#include "Fechas.h"
#include "GestorPrestamos.h"
#include"Revista.h"
#include "Cliente.h"
#include <locale.h>
#include <vector>
using namespace std;
#include <cstdio>
#include <vector>

//Pasos para usar con tortoise
//primero comit
//segundo PULL
//tercero PUSH

vector<Cliente> clientes;
vector<Revista> nuevarevista;
vector<Libro> nuevolibro;
vector<Articulo> nuevoarticulo;

class Publicacion {
protected:
	int id;
	string titulo;
	string materia;
	bool estado; // Disponible o agotadopublic:

	//constructor prederteminado 
	Publicacion() : id(0), titulo(""), materia(""), estado(false) {}
	Publicacion(int _id, string _titulo, string _materia, bool _estado) : id(_id), titulo(_titulo), materia(_materia), estado(_estado) {}

	// Getters
	int getId() const { return id; }
	string getTitulo() const { return titulo; }
	string getMateria() const { return materia; }
	bool getEstado() const { return estado; }
};

class Libro : public Publicacion {
private:
	string autor;
	string editorial;
	int cantidadEjemplares;

public:

	//constructor 
	Libro() : autor(""), editorial(""), cantidadEjemplares(0) {}



	Libro(int _id, string _titulo, string _materia, bool _estado, string _autor, string _editorial, int _cantidadEjemplares) :
		Publicacion(_id, _titulo, _materia, _estado), autor(_autor), editorial(_editorial), cantidadEjemplares(_cantidadEjemplares) {}

	// Getters
	string getAutor() const { return autor; }
	string getEditorial() const { return editorial; }
	int getCantidadEjemplares() const { return cantidadEjemplares; }

	//setters
	void SetAutor(const string& _autor) { autor = _autor; }
	void SetEditorial(const string& _editorial) { editorial = _editorial; }
	void SetCantiad(int _cantiad) { int cantiad = _cantiad; }
	// heredados
	void SetId(int _id) { id = _id; }
	void SetTitulo(const string& _titulo) { titulo = _titulo; }
	void SetMateria(const string& _materia) { materia = _materia; }
	void SetEstado(bool _estado) { estado = _estado; }





};

class Revista : public Publicacion {
private:
	int anio;
	int numero;

public:
	// constructor predeterminado 

	Revista() : anio(0), numero(0) {}
	Revista(int _id, string _titulo, string _materia, bool _estado, int _anio, int _numero) :
		Publicacion(_id, _titulo, _materia, _estado), anio(_anio), numero(_numero) {}

	// Getters
	int getAnio() const { return anio; }
	int getNumero() const { return numero; }

	//setters 
	void SetAnio(int _anio) { anio = _anio; }
	void SetNumero(int _numero) { numero = _numero; }


	void SetId(int _id) { id = _id; }
	void SetTitulo(string _titulo) { titulo = _titulo; }
	void SetMateria(string _materia) { materia = _materia; }
	void SetAnio(int _anio) { anio = _anio; }
	void SetEstado(bool _estado) { estado = _estado; }

}; 

class Articulo : public Publicacion {
private:
	string arbitro;

public:
	//constructor predeterminado 
	Articulo() : arbitro("") {}
	Articulo(int _id, string _titulo, string _materia, bool _estado, string _arbitro) :
		Publicacion(_id, _titulo, _materia, _estado), arbitro(_arbitro) {}

	// Getter
	string getArbitro() const { return arbitro; }

	// Setter
	void SetArbitro(const string& _arbitro) { arbitro = _arbitro; }

	// Heredados
	void SetId(int _id) { id = _id; }
	void SetTitulo(const string& _titulo) { titulo = _titulo; }
	void SetMateria(const string& _materia) { materia = _materia; }
	void SetEstado(bool _estado) { estado = _estado; }
	void SetCantiad(int _cantiad) { /* No se implementa en la clase Articulo */ }


};

// Función para generar el reporte de publicaciones
void reportePublicaciones(const vector<Libro>& libros, const vector<Revista>& revistas, const vector<Articulo>& articulos) {
	cout << "----- Reporte de Publicaciones -----" << endl;
	cout << "Libros:" << endl;
	for (const auto& libro : libros) {
		cout << "ID: " << libro.getId() << ", Título: " << libro.getTitulo() << ", Autor: " << libro.getAutor()
			<< ", Editorial: " << libro.getEditorial() << ", Materia: " << libro.getMateria() << ", Estado: " << (libro.getEstado() ? "Disponible" : "Agotado")
			<< ", Cantidad de ejemplares: " << libro.getCantidadEjemplares() << endl;
	}

	cout << "Revistas:" << endl;
	for (const auto& revista : revistas) {
		cout << "ID: " << revista.getId() << ", Título: " << revista.getTitulo() << ", Año: " << revista.getAnio()
			<< ", Número: " << revista.getNumero() << ", Materia: " << revista.getMateria() << ", Estado: " << (revista.getEstado() ? "Disponible" : "Agotado") << endl;
	}

	cout << "Artículos:" << endl;
	for (const auto& articulo : articulos) {
		cout << "ID: " << articulo.getId() << ", Título: " << articulo.getTitulo() << ", Árbitro: " << articulo.getArbitro()
			<< ", Materia: " << articulo.getMateria() << ", Estado: " << (articulo.getEstado() ? "Disponible" : "Agotado") << endl;
	}
}





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
			/*reportePrestamos();*/
			/*string tipo;
			int id = 0, nuLibro = 0, temp = 0;
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
								cout << "Sus libros han sido prestados\n";

							}
						}
						else {
							cout << "Lo sentimos, su libro no esta disponible\n";
						}


					}

				}
			}*/
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
		cout << "1. Registrar publicacion" << endl;//adimin
		cout << "2. Registrar cliente" << endl;//adimin
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
		   cout << "Ingrese el número de identidad del cliente: ";
		   cin >> numId;
		   cout << "Ingrese el nombre del cliente: ";
		   cin.ignore();
		   getline(cin, nombre);
		   cout << "Ingrese la dirección del cliente: ";
		   getline(cin, direccion);

		   // Crear un nuevo objeto Cliente con los datos ingresados por el usuario
		   Cliente nuevoCliente(numId, nombre, direccion, 0); // 0 es un valor de ejemplo para publicacion_presta

		   // Agregar el nuevo cliente al vector de clientes
		   clientes.push_back(nuevoCliente);

		   cout << "Cliente registrado con éxito." << endl;


			break;
		case 3:
			// Realizar préstamo
			int idCliente, idPublicacion;
			// Lógica para solicitar y verificar el ID del cliente y la publicación a prestar
			// Supongamos que ya se han obtenido los IDs del cliente y de la publicación

			// Crear el objeto de Prestamo
			Prestamo prestamo(idCliente, idPublicacion);

			// Agregar el préstamo al gestor de préstamos
			GestorPrestamos gestorPrestamos;
			gestorPrestamos.agregarPrestamo(prestamo);

			// Lógica adicional según sea necesario, como guardar los préstamos en un archivo, actualizar el estado de la publicación, etc.
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
			/*case 6:
				cout << "Saliendo del programa..." << endl;
				opc = 8;
				break;*/


		}

	} while (opc < 6);

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
