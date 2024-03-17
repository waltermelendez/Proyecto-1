#pragma once
#include "Fechas.h"

class Prestamo {
private:
    int idCliente;
    int idPublicacion;
    std::chrono::system_clock::time_point fechaPrestamo;
    std::chrono::system_clock::time_point fechaDevolucionPrevista;

public:
    Prestamo(int idCliente, int idPublicacion);

};
