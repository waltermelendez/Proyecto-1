#include "Fechas.h"

std::chrono::system_clock::time_point Fechas::obtenerFechaActual() {
    return std::chrono::system_clock::now();
}

std::chrono::system_clock::time_point Fechas::calcularFechaDevolucionPrevista() {
    // Lógica para calcular la fecha de devolución prevista, por ejemplo, sumar 7 días a la fecha actual
    auto ahora = obtenerFechaActual();
    return ahora + std::chrono::hours(24 * 7); // Devuelve la fecha actual más una semana
}
