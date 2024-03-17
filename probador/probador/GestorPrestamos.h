#pragma once
#include "Prestamo.h"
#include <vector>

class GestorPrestamos {
private:
    std::vector<Prestamo> listaPrestamos;

public:
    void agregarPrestamo(const Prestamo& prestamo);

};
