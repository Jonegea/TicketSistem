#include "../include/RepresentanteTelefonico.h"
#include "../include/Cliente.h"
#include <iostream>

RepresentanteTelefonico::RepresentanteTelefonico(int id, const std::string& nombre, const std::string& email)
    : Usuario(id, nombre, email) {}

void RepresentanteTelefonico::atenderLlamada(const Cliente& cliente) {
    std::cout << "Atendiendo llamada de cliente: " << cliente.getNombre() << std::endl;
}

void RepresentanteTelefonico::asignarTicket(Ticket* ticket) {
    ticketAsignado = ticket;
}