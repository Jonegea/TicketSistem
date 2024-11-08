#include "../include/Usuario.h"
#include <iostream>

Usuario::Usuario(int id, const std::string& nombre, const std::string& email)
    : id(id), nombre(nombre), email(email) {}

void Usuario::enviarMensaje(const Mensaje& mensaje) {
    std::cout << "Mensaje enviado: " << mensaje.getContenido() << std::endl;
}

std::string Usuario::getNombre() const {
    return nombre;
}

int Usuario::getId() const {
    return id;
}