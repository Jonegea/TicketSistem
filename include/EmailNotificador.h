#ifndef EMAILNOTIFICADOR_H
#define EMAILNOTIFICADOR_H

#include "Notificador.h"

class EmailNotificador : public Notificador {
public:
    void enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) override;
};

#endif
