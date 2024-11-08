#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Usuario.h"
#include "Ubicacion.h"
#include "RepresentanteTelefonico.h"
#include "Ticket.h"

class Cliente : public Usuario {
private:
    int id;
    std::string nombre;
    Ubicacion* ubicacion;
    RepresentanteTelefonico* representante;  // Puntero a representante
    Ticket* ticket;

public:
    // Constructor con parámetros
    Cliente() = default;
    Cliente(int id, const std::string& nombre, const std::string& email, Ubicacion* ubicacion);

    // Métodos
    std::string getNombre() const override;
    int getId() const override;
    Ubicacion* obtenerUbicacion() const;
    void asignarUbicacion(Ubicacion* nuevaUbicacion);
    void asignarRepresentante(RepresentanteTelefonico* rep);
    Ticket* obtenerTicket() const;
};

#endif
