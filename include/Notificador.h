#ifndef NOTIFICADOR_H
#define NOTIFICADOR_H

#include "Mensaje.h"
#include "Usuario.h"

class Notificador {
public:
    virtual void enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) = 0;
};

#endif
