#include "../include/ColaSoporte.h"

void ColaSoporte::agregarCliente(const Cliente& cliente) {
    cola.push(cliente);
}

Cliente ColaSoporte::quitarCliente() {
    Cliente cliente = cola.front();
    cola.pop();
    return cliente;
}

bool ColaSoporte::estaVacia() const {
    return cola.empty();
}
