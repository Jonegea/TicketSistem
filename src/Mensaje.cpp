#include "../include/Mensaje.h"

Mensaje::Mensaje(int id, const std::string& contenido, bool esDeCliente)
    : id(id), contenido(contenido), fecha(std::time(nullptr)), esDeCliente(esDeCliente) {}

std::string Mensaje::getContenido() const {
    return contenido;
}

bool Mensaje::esCliente() const {
    return esDeCliente;
}
