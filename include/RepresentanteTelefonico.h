    #ifndef REPRESENTANTETELEFONICO_H
    #define REPRESENTANTETELEFONICO_H

    #include "Usuario.h"
    #include "Ticket.h"
    #include <string>

    class Cliente;

    class RepresentanteTelefonico : public Usuario {
    private:
        Ticket* ticketAsignado;
        std::string nombre;
    public:
        RepresentanteTelefonico() = default;
        RepresentanteTelefonico(int id, const std::string& nombre, const std::string& email);
        std::string obtenerNombre() const {return nombre;}
        void atenderLlamada(const Cliente& cliente);
        void asignarTicket(Ticket* ticket);
        };

    #endif
