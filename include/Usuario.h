#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "Mensaje.h"

class Usuario {
protected: // Cambio de acceso a 'protected' para permitir que las clases derivadas accedan
    int id;
    std::string nombre;
    std::string email;

public:
    Usuario() = default;
    Usuario(int id, const std::string& nombre, const std::string& email);

    virtual void enviarMensaje(const Mensaje& mensaje);

    virtual std::string getNombre() const;  // Marca como virtual
    virtual int getId() const;              // Marca como virtual
};

#endif // USUARIO_H
