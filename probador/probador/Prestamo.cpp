#include "Prestamo.h"

Prestamo::Prestamo(int idCliente, int idPublicacion) :
    idCliente(idCliente), idPublicacion(idPublicacion) {
    fechaPrestamo = Fechas::obtenerFechaActual();
    fechaDevolucionPrevista = Fechas::calcularFechaDevolucionPrevista();
}
