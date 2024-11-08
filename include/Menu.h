#ifndef MENU_H
#define MENU_H

#include "Cliente.h"
#include "RepresentanteTelefonico.h"
#include "Ticket.h"
#include "Grafo.h"
#include <map>

class Menu {
private:
    std::map<int, Cliente> clientes;
    std::map<int, RepresentanteTelefonico> representantes;
    std::map<int, Ticket> tickets;
    Grafo grafo;
    
    Cliente* clienteSeleccionado = nullptr;
    RepresentanteTelefonico* representanteSeleccionado = nullptr;
    Ticket* ticketSeleccionado = nullptr;

public:
    void mostrarMenuPrincipal();
    
    // Opciones de Cliente
    void menuCliente();
    void seleccionarCliente();
    void crearCliente();
    void asignarRepresentante();
    void reportarIncidente();

    // Opciones de Representante Telefonico
    void menuRepresentante();
    void seleccionarRepresentante();
    void crearRepresentante();
    void asignarTicket();

    // Opciones de Ticket
    void menuTicket();
    void seleccionarTicket();
    void examinarTicket();
    void historialTicket();

    // Opciones de camino más corto
    void determinarCamino();

    // Opción para salir
    void salir();
};

#endif // MENU_H
