#include "Ticket.h"

// Constructor
Ticket::Ticket(int id, const std::string& estado, Usuario* cliente, Usuario* representanteTelefonico)
    : id(id), estado(estado), cliente(cliente), representanteTelefonico(representanteTelefonico) {}

// Métodos para gestionar incidentes
void Ticket::agregarIncidente(const std::shared_ptr<Incidente>& incidente) {
    incidentes.push_back(incidente);
}

const std::vector<std::shared_ptr<Incidente>>& Ticket::obtenerIncidentes() const {
    return incidentes;
}

// Métodos para obtener datos del ticket
int Ticket::obtenerId() const {
    return id;
}

std::string Ticket::obtenerEstado() const {
    return estado;
}

Usuario* Ticket::obtenerCliente() const {
    return cliente;
}

Usuario* Ticket::obtenerRepresentanteTelefonico() const {
    return representanteTelefonico;
}

// Método para actualizar el estado del ticket
void Ticket::actualizarEstado(const std::string& nuevoEstado) {
    estado = nuevoEstado;
}
