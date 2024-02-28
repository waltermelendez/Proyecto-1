#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Definición de clases
class Publicacion {
protected:
    int identificador;
    string titulo;
    string autor;
    string editorial;
    string materia;
    int cantidadEjemplares;
    string estado;
public:
    // Constructor
    Publicacion(int id, string tit, string aut, string edi, string mat, int cant, string est = "disponible")
        : identificador(id), titulo(tit), autor(aut), editorial(edi), materia(mat), cantidadEjemplares(cant), estado(est) {}

    // Getters
    int getIdentificador() const { return identificador; }
    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    string getEditorial() const { return editorial; }
    string getMateria() const { return materia; }
    int getCantidadEjemplares() const { return cantidadEjemplares; }
    string getEstado() const { return estado; }
};

class Libro : public Publicacion {
public:
    // Constructor
    Libro(int id, string tit, string aut, string edi, string mat, int cant, string est = "disponible")
        : Publicacion(id, tit, aut, edi, mat, cant, est) {}
};

class Revista : public Publicacion {
private:
    int ano;
    int numero;
public:
    // Constructor
    Revista(int id, string tit, string mat, int cant, int a, int num, string est = "disponible")
        : Publicacion(id, tit, "", "", mat, cant, est), ano(a), numero(num) {}

    // Getters
    int getAno() const { return ano; }
    int getNumero() const { return numero; }
};

class Articulo : public Publicacion {
private:
    string arbitro;
public:
    // Constructor
    Articulo(int id, string tit, string aut, string mat, int cant, string arb, string est = "disponible")
        : Publicacion(id, tit, aut, "", mat, cant, est), arbitro(arb) {}

    // Getter
    string getArbitro() const { return arbitro; }
};

class Cliente {
private:
    int numeroIdentidad;
    string nombre;
    string direccion;
    int cantidadPrestamos;
public:
    // Constructor
    Cliente(int numId, string nom, string dir)
        : numeroIdentidad(numId), nombre(nom), direccion(dir), cantidadPrestamos(0) {}

    // Getters
    int getNumeroIdentidad() const { return numeroIdentidad; }
    string getNombre() const { return nombre; }
    string getDireccion() const { return direccion; }
    int getCantidadPrestamos() const { return cantidadPrestamos; }

    // Función para aumentar la cantidad de préstamos
    void aumentarCantidadPrestamos() { cantidadPrestamos++; }
};

class Prestamo {
private:
    int idPublicacion;
    int idCliente;
    string fechaSolicitud;
    string fechaDevolucion;
public:
    // Constructor
    Prestamo(int idPub, int idCli, string fs, string fd)
        : idPublicacion(idPub), idCliente(idCli), fechaSolicitud(fs), fechaDevolucion(fd) {}

    // Getters
    int getIdPublicacion() const { return idPublicacion; }
    int getIdCliente() const { return idCliente; }
    string getFechaSolicitud() const { return fechaSolicitud; }
    string getFechaDevolucion() const { return fechaDevolucion; }
};

// Vectores globales para almacenar datos
vector<Publicacion*> publicaciones;
vector<Cliente*> clientes;
vector<Prestamo*> prestamos;

// Prototipos de funciones
void menu();
void menuReportes();
void registrarPublicacion();
void registrarCliente();
void realizarPrestamo();
void devolverPublicacion();
void reportePrestamos();
void reporteClientesPrestamos();
void reporteMorososMultas();
void reportePublicaciones();
bool compararPublicacionPorTitulo(const Publicacion* p1, const Publicacion* p2);

// Desarrollo de funciones

void registrarPublicacion() {
    int tipoPublicacion;
    cout << "Selecciona el tipo de publicación a registrar:" << endl;
    cout << "1. Libro" << endl;
    cout << "2. Revista" << endl;
    cout << "3. Artículo" << endl;
    cout << "Ingrese su opción: ";
    cin >> tipoPublicacion;

    int id;
    string titulo, autor, editorial, materia, estado;
    int cantidadEjemplares;
    switch (tipoPublicacion) {
    case 1: // Libro
        cout << "Ingrese el identificador: ";
        cin >> id;
        cout << "Ingrese el título: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese el autor: ";
        getline(cin, autor);
        cout << "Ingrese la editorial: ";
        getline(cin, editorial);
        cout << "Ingrese la materia: ";
        getline(cin, materia);
        cout << "Ingrese la cantidad de ejemplares: ";
        cin >> cantidadEjemplares;
        cout << "Ingrese el estado (disponible/agotado): ";
        cin >> estado;
        publicaciones.push_back(new Libro(id, titulo, autor, editorial, materia, cantidadEjemplares, estado));
        break;
    case 2: // Revista
        int ano, numero;
        cout << "Ingrese el identificador: ";
        cin >> id;
        cout << "Ingrese el título: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese la materia: ";
        getline(cin, materia);
        cout << "Ingrese la cantidad de ejemplares: ";
        cin >> cantidadEjemplares;
        cout << "Ingrese el año: ";
        cin >> ano;
        cout << "Ingrese el número: ";
        cin >> numero;
        cout << "Ingrese el estado (disponible/agotado): ";
        cin >> estado;
        publicaciones.push_back(new Revista(id, titulo, materia, cantidadEjemplares, ano, numero, estado));
        break;
    case 3: // Artículo
        string arbitro;
        cout << "Ingrese el identificador: ";
        cin >> id;
        cout << "Ingrese el título: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese el autor: ";
        getline(cin, autor);
        cout << "Ingrese la materia: ";
        getline(cin, materia);
        cout << "Ingrese la cantidad de ejemplares: ";
        cin >> cantidadEjemplares;
        cout << "Ingrese el árbitro: ";
        cin.ignore();
        getline(cin, arbitro);
        cout << "Ingrese el estado (disponible/agotado): ";
        cin >> estado;
        publicaciones.push_back(new Articulo(id, titulo, autor, materia, cantidadEjemplares, arbitro, estado));
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
    }
}

void registrarCliente() {
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
}

void realizarPrestamo() {
    // Valida disponibilidad, registra préstamo en vector
    int idPublicacion, idCliente;
    string fechaSolicitud, fechaDevolucion;
    cout << "Ingrese el identificador de la publicación a prestar: ";
    cin >> idPublicacion;
    // Buscar la publicación por su identificador
    Publicacion* publicacion = nullptr;
    for (const auto& p : publicaciones) {
        if (p->getIdentificador() == idPublicacion) {
            publicacion = p;
            break;
        }
    }
    if (!publicacion) {
        cout << "No se encontró ninguna publicación con el identificador proporcionado." << endl;
        return;
    }
    // Verificar si hay ejemplares disponibles
    if (publicacion->getCantidadEjemplares() == 0) {
        cout << "La publicación seleccionada no está disponible para préstamo." << endl;
        return;
    }
    // Incrementar la cantidad de préstamos del cliente
    cout << "Ingrese el número de identidad del cliente: ";
    cin >> idCliente;
    Cliente* cliente = nullptr;
    for (const auto& c : clientes) {
        if (c->getNumeroIdentidad() == idCliente) {
            cliente = c;
            break;
        }
    }
    if (!cliente) {
        cout << "No se encontró ningún cliente con el número de identidad proporcionado." << endl;
        return;
    }
    if (cliente->getCantidadPrestamos() >= 5) {
        cout << "El cliente ha alcanzado el límite máximo de préstamos." << endl;
        return;
    }
    cliente->aumentarCantidadPrestamos();
    // Registrar el préstamo
    cout << "Ingrese la fecha de solicitud (DD/MM/AAAA): ";
    cin >> fechaSolicitud;
    cout << "Ingrese la fecha de devolución (DD/MM/AAAA): ";
    cin >> fechaDevolucion;
    prestamos.push_back(new Prestamo(idPublicacion, idCliente, fechaSolicitud, fechaDevolucion));
    // Decrementar la cantidad de ejemplares disponibles de la publicación
    publicacion->cantidadEjemplares--;
    cout << "Préstamo registrado con éxito." << endl;
}

void devolverPublicacion() {
    int idPublicacion, idCliente;
    cout << "Ingrese el identificador de la publicación a devolver: ";
    cin >> idPublicacion;
    cout << "Ingrese el número de identidad del cliente que devuelve la publicación: ";
    cin >> idCliente;
    // Buscar el préstamo correspondiente
    auto it = find_if(prestamos.begin(), prestamos.end(), [=](Prestamo* p) {
        return p->getIdPublicacion() == idPublicacion && p->getIdCliente() == idCliente;
        });
    if (it == prestamos.end()) {
        cout << "No se encontró ningún préstamo con los identificadores proporcionados." << endl;
        return;
    }
    // Calcular si hay multa
    // Marcar la publicación como disponible
    // Eliminar el préstamo de la lista de préstamos
    cout << "Publicación devuelta exitosamente." << endl;
}

void reportePrestamos() {
    cout << "----- Reporte de Préstamos -----" << endl;
    for (const auto& p : prestamos) {
        cout << "ID Publicación: " << p->getIdPublicacion() << ", ID Cliente: " << p->getIdCliente() << ", Fecha de solicitud: " << p->getFechaSolicitud() << ", Fecha de devolución: " << p->getFechaDevolucion() << endl;
    }
}

void reporteClientesPrestamos() {
    cout << "----- Reporte de Clientes con Préstamos -----" << endl;
    for (const auto& c : clientes) {
        if (c->getCantidadPrestamos() > 0) {
            cout << "Nombre: " << c->getNombre() << ", ID: " << c->getNumeroIdentidad() << ", Cantidad de préstamos: " << c->getCantidadPrestamos() << endl;
        }
    }
}

void reporteMorososMultas() {
    cout << "----- Reporte de Morosos y Multas -----" << endl;
    // Implementar lógica para calcular morosos y multas
}

void reportePublicaciones() {
    cout << "----- Reporte de Publicaciones -----" << endl;
    // Implementar reporte de publicaciones
}

bool compararPublicacionPorTitulo(const Publicacion* p1, const Publicacion* p2) {
    return p1->getTitulo() < p2->getTitulo();
}

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

int main() {
    menu();
    return 0;
}
