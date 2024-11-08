#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <vector>
#include <memory>
#include "Incidente.h"
#include "Usuario.h"

class Ticket {
private:
    int id;
    std::string estado;
    Usuario* cliente; // Puntero para gestionar la relación con el cliente
    Usuario* representanteTelefonico; // Puntero para gestionar la relación con el representante
    std::vector<std::shared_ptr<Incidente>> incidentes; // Contenedor de incidentes asociados al ticket

public:
    // Constructor
    Ticket() = default;
    Ticket(int id, const std::string& estado, Usuario* cliente, Usuario* representanteTelefonico);

    // Métodos para gestionar incidentes
    void agregarIncidente(const std::shared_ptr<Incidente>& incidente);
    const std::vector<std::shared_ptr<Incidente>>& obtenerIncidentes() const;

    // Métodos para obtener datos del ticket
    int obtenerId() const;
    std::string obtenerEstado() const;
    Usuario* obtenerCliente() const;
    Usuario* obtenerRepresentanteTelefonico() const;

    // Métodos para actualizar el estado del ticket
    void actualizarEstado(const std::string& nuevoEstado);
};

#endif // TICKET_H
