#ifndef SISTEMANOTIFICACIONES_H
#define SISTEMANOTIFICACIONES_H

#include <list>
#include "Notificador.h"
#include "Usuario.h"
#include "Mensaje.h"

class SistemaNotificaciones {
private:
    std::list<Notificador*> notificacionesActivas;

public:
    void agregarNotificacion(Notificador* notificador);
    void notificarUsuario(const Usuario& usuario, const Mensaje& mensaje);
};

#endif
