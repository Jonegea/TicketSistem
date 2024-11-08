#include "Menu.h"
#include <iostream>
#include <string>

// Función para mostrar el menú principal
void Menu::mostrarMenuPrincipal() {
    int opcion;
    do {
        std::cout << "MENU PRINCIPAL:\n";
        std::cout << "1. Cliente\n";
        std::cout << "2. Representante Telefonico\n";
        std::cout << "3. Ticket\n";
        std::cout << "4. Determinar Camino\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: menuCliente(); break;
            case 2: menuRepresentante(); break;
            case 3: menuTicket(); break;
            case 4: determinarCamino(); break;
            case 5: salir(); break;
            default: std::cout << "Opción no válida.\n";
        }
    } while (opcion != 5);
}

// Opciones de Cliente
void Menu::menuCliente() {
    int opcion;
    do {
        std::cout << "MENU CLIENTE:\n";
        std::cout << "1. Seleccionar Cliente\n";
        std::cout << "2. Crear Cliente\n";
        std::cout << "3. Asignar Representante\n";
        std::cout << "4. Reportar Incidente\n";
        std::cout << "5. Volver al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: seleccionarCliente(); break;
            case 2: crearCliente(); break;
            case 3: asignarRepresentante(); break;
            case 4: reportarIncidente(); break;
            case 5: std::cout << "Volviendo al menú principal.\n"; break;
            default: std::cout << "Opción no válida.\n";
        }
    } while (opcion != 5);
}

void Menu::seleccionarCliente() {
    int id;
    std::cout << "Ingrese el ID del cliente: ";
    std::cin >> id;
    if (clientes.find(id) != clientes.end()) {
        clienteSeleccionado = &clientes[id];
        std::cout << "Cliente seleccionado: " << clienteSeleccionado->getNombre() << "\n";
    } else {
        std::cout << "Cliente no encontrado.\n";
    }
}

void Menu::crearCliente() {
    int id;
    std::string nombre;
    std::string email;
    std::cout << "Ingrese ID del cliente: ";
    std::cin >> id;
    std::cout << "Ingrese nombre del cliente: ";
    std::cin.ignore();  // Ignorar el salto de línea pendiente
    std::getline(std::cin, nombre);
    std::cout << "Ingrese mail del cliente: ";
    std::getline(std::cin, email);
    clientes[id] = Cliente(id, nombre, email, nullptr);
    std::cout << "Cliente creado exitosamente.\n";
}

void Menu::asignarRepresentante() {
    if (clienteSeleccionado == nullptr) {
        std::cout << "Seleccione primero un cliente.\n";
        return;
    }
    int idRep;
    std::cout << "Ingrese el ID del representante: ";
    std::cin >> idRep;
    if (representantes.find(idRep) != representantes.end()) {
        clienteSeleccionado->asignarRepresentante(&representantes[idRep]);
        std::cout << "Representante asignado al cliente.\n";
    } else {
        std::cout << "Representante no encontrado.\n";
    }
}

void Menu::reportarIncidente() {
    if (clienteSeleccionado == nullptr) {
        std::cout << "Seleccione primero un cliente.\n";
        return;
    }
    std::string descripcion;
    std::cout << "Ingrese descripción del incidente: ";
    std::cin.ignore();
    std::getline(std::cin, descripcion);

    Ticket* ticket = clienteSeleccionado->obtenerTicket();
    std::shared_ptr<Incidente> incidente = std::make_shared<Incidente>(descripcion);
    ticket->agregarIncidente(incidente);
    std::cout << "Incidente reportado y agregado al ticket del cliente.\n";
}

// Opciones de Representante Telefonico
void Menu::menuRepresentante() {
    int opcion;
    do {
        std::cout << "MENU REPRESENTANTE TELEFONICO:\n";
        std::cout << "1. Seleccionar Representante\n";
        std::cout << "2. Crear Representante\n";
        std::cout << "3. Asignar Ticket\n";
        std::cout << "4. Volver al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: seleccionarRepresentante(); break;
            case 2: crearRepresentante(); break;
            case 3: asignarTicket(); break;
            case 4: std::cout << "Volviendo al menú principal.\n"; break;
            default: std::cout << "Opción no válida.\n";
        }
    } while (opcion != 4);
}


void Menu::seleccionarRepresentante() {
    int id;
    std::cout << "Ingrese el ID del representante: ";
    std::cin >> id;
    if (representantes.find(id) != representantes.end()) {
        representanteSeleccionado = &representantes[id];
        std::cout << "Representante seleccionado: " << representanteSeleccionado->obtenerNombre() << "\n";
    } else {
        std::cout << "Representante no encontrado.\n";
    }
}

void Menu::crearRepresentante() {
    int id;
    std::string nombre;
    std::cout << "Ingrese ID del representante: ";
    std::cin >> id;
    std::cout << "Ingrese nombre del representante: ";
    std::cin.ignore();  // Ignorar el salto de línea pendiente
    std::getline(std::cin, nombre);
    representantes[id] = RepresentanteTelefonico(id, nombre, "");
    std::cout << "Representante creado exitosamente.\n";
}

void Menu::asignarTicket() {
    if (representanteSeleccionado == nullptr || ticketSeleccionado == nullptr) {
        std::cout << "Seleccione primero un representante y un ticket.\n";
        return;
    }
    representanteSeleccionado->asignarTicket(ticketSeleccionado);
    std::cout << "Ticket asignado al representante seleccionado.\n";
}

// Opciones de Ticket
void Menu::menuTicket() {
    int opcion;
    do {
        std::cout << "MENU TICKET:\n";
        std::cout << "1. Seleccionar Ticket\n";
        std::cout << "2. Examinar Ticket\n";
        std::cout << "3. Historial de Incidentes\n";
        std::cout << "4. Volver al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: seleccionarTicket(); break;
            case 2: examinarTicket(); break;
            case 3: historialTicket(); break;
            case 4: std::cout << "Volviendo al menú principal.\n"; break;
            default: std::cout << "Opción no válida.\n";
        }
    } while (opcion != 4);
}


void Menu::seleccionarTicket() {
    int id;
    std::cout << "Ingrese el ID del ticket: ";
    std::cin >> id;
    if (tickets.find(id) != tickets.end()) {
        ticketSeleccionado = &tickets[id];
        std::cout << "Ticket seleccionado: ID " << ticketSeleccionado->obtenerId() << "\n";
    } else {
        std::cout << "Ticket no encontrado.\n";
    }
}

void Menu::examinarTicket() {
    if (ticketSeleccionado == nullptr) {
        std::cout << "Seleccione primero un ticket.\n";
        return;
    }
    // Código para mostrar los detalles del ticket
}

void Menu::historialTicket() {
    if (ticketSeleccionado == nullptr) {
        std::cout << "Seleccione primero un ticket.\n";
        return;
    }
    // Código para mostrar el historial de incidentes del ticket
}

// Determinar camino más corto
void Menu::determinarCamino() {
    // Implementación de Dijkstra usando la clase Grafo
}

void Menu::salir() {
    std::cout << "Saliendo del programa.\n";
}
