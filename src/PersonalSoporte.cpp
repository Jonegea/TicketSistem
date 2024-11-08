#include "../include/PersonalSoporte.h"
#include <iostream>

PersonalSoporte::PersonalSoporte(int id, const std::string& nombre) : id(id), nombre(nombre) {}

void PersonalSoporte::atenderCliente(const Cliente& cliente) {
    std::cout << "Atendiendo a cliente: " << cliente.getNombre() << std::endl;
}
