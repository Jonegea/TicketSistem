#ifndef PERSONALSOPORTE_H
#define PERSONALSOPORTE_H

#include <string>
#include "Cliente.h"

class PersonalSoporte {
private:
    int id;
    std::string nombre;

public:
    PersonalSoporte(int id, const std::string& nombre);
    void atenderCliente(const Cliente& cliente);
};

#endif
