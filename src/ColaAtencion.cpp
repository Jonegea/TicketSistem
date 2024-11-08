#include "../include/ColaAtencion.h"
#include <iostream>

void ColaAtencion::agregarCliente(const Cliente& cliente) {
    cola.push(cliente);
}

void ColaAtencion::atenderCliente() {
    if (!cola.empty()) {
        enAtencion = new Cliente(cola.front());
        cola.pop();
    } else {
        enAtencion = nullptr;
    }
}

void ColaAtencion::terminarAtencion() {
    if (enAtencion) {
        clientesAtendidos.push_back(*enAtencion);
        delete enAtencion;
        enAtencion = nullptr;
    }
}

void ColaAtencion::mostrarCola() {
    std::cout << "Clientes en cola:" << std::endl;
    std::queue<Cliente> copiaCola = cola;
    while (!copiaCola.empty()) {
        std::cout << "- " << copiaCola.front().getNombre() << std::endl;
        copiaCola.pop();
    }
    if (enAtencion) {
        std::cout << "Cliente en atención: " << enAtencion->getNombre() << std::endl;
    }
    std::cout << "Clientes atendidos:" << std::endl;
    for (const auto& cliente : clientesAtendidos) {
        std::cout << "- " << cliente.getNombre() << std::endl;
    }
}
