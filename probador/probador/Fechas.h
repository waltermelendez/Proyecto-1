#pragma once
#include <chrono>

class Fechas {
public:
    static std::chrono::system_clock::time_point obtenerFechaActual();
    static std::chrono::system_clock::time_point calcularFechaDevolucionPrevista();
};
