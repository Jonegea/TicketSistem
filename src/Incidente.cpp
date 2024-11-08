#include "Incidente.h"

// Constructor
//Incidente::Incidente(int id, const std::string& descripcion, const std::string& estado)
//    : id(id), descripcion(descripcion), estado(estado) {
//    fecha = std::time(nullptr); // Inicializa la fecha al momento de creación
//}
Incidente::Incidente(const std::string& descripcion)
    : descripcion(descripcion) {}

// Métodos para obtener información del incidente
int Incidente::obtenerId() const {
    return id;
}

std::string Incidente::obtenerDescripcion() const {
    return descripcion;
}

std::time_t Incidente::obtenerFecha() const {
    return fecha;
}

std::string Incidente::obtenerEstado() const {
    return estado;
}

// Método para actualizar el estado del incidente
void Incidente::actualizarEstado(const std::string& nuevoEstado) {
    estado = nuevoEstado;
}
