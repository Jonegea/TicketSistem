#ifndef UBICACION_H
#define UBICACION_H

#include <string>

class Ubicacion {
private:
    int id;
    std::string direccion;
    double coordenadaX;
    double coordenadaY;

public:
    Ubicacion() = default;
    Ubicacion(int id, const std::string& direccion, double coordenadaX, double coordenadaY);

    int obtenerId() const;
    std::string obtenerDireccion() const;
    double obtenerCoordenadaX() const;
    double obtenerCoordenadaY() const;
};

#endif // UBICACION_H
