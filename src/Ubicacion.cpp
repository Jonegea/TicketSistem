#include "Ubicacion.h"

Ubicacion::Ubicacion(int id, const std::string& direccion, double coordenadaX, double coordenadaY)
    : id(id), direccion(direccion), coordenadaX(coordenadaX), coordenadaY(coordenadaY) {}

int Ubicacion::obtenerId() const {
    return id;
}

std::string Ubicacion::obtenerDireccion() const {
    return direccion;
}

double Ubicacion::obtenerCoordenadaX() const {
    return coordenadaX;
}

double Ubicacion::obtenerCoordenadaY() const {
    return coordenadaY;
}
