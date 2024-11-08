#include "../include/Cliente.h"

// Constructor de Cliente que llama al constructor de Usuario
Cliente::Cliente(int id, const std::string& nombre, const std::string& email, Ubicacion* ubicacion)
    : Usuario(id, nombre, email), ubicacion(ubicacion) {}

// Métodos
std::string Cliente::getNombre() const {
    return Usuario::getNombre(); // Llamar al método de la clase base
}

int Cliente::getId() const {
    return Usuario::getId(); // Llamar al método de la clase base
}

Ubicacion* Cliente::obtenerUbicacion() const {
    return ubicacion;
}

void Cliente::asignarRepresentante(RepresentanteTelefonico* rep) {
    representante = rep;
}

Ticket* Cliente::obtenerTicket() const {
    return ticket;
}

void Cliente::asignarUbicacion(Ubicacion* nuevaUbicacion) {
    ubicacion = nuevaUbicacion;
}
