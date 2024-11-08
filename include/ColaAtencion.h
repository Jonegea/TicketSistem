#ifndef COLAATENCION_H
#define COLAATENCION_H

#include <queue>
#include <list>
#include "Cliente.h"

class ColaAtencion {
private:
    std::queue<Cliente> cola;
    Cliente* enAtencion = nullptr;
    std::list<Cliente> clientesAtendidos;

public:
    void agregarCliente(const Cliente& cliente);
    void atenderCliente();
    void terminarAtencion();
    void mostrarCola();
};

#endif
