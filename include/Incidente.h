#ifndef INCIDENTE_H
#define INCIDENTE_H

#include <string>
#include <ctime>

class Incidente {
private:
    int id;
    std::string descripcion;
    std::time_t fecha; // Fecha y hora del incidente
    std::string estado;

public:
    // Constructor
    //Incidente(int id, const std::string& descripcion, const std::string& estado);
    Incidente(const std::string& descripcion);

    // Métodos para obtener información del incidente
    int obtenerId() const;
    std::string obtenerDescripcion() const;
    std::time_t obtenerFecha() const;
    std::string obtenerEstado() const;

    // Método para actualizar el estado del incidente
    void actualizarEstado(const std::string& nuevoEstado);
};

#endif // INCIDENTE_H
