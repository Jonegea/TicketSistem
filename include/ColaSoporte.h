#ifndef COLASOPORTE_H
#define COLASOPORTE_H

#include <queue>
#include "Cliente.h"

class ColaSoporte {
private:
    std::queue<Cliente> cola;

public:
    void agregarCliente(const Cliente& cliente);
    Cliente quitarCliente();
    bool estaVacia() const;
};

#endif
