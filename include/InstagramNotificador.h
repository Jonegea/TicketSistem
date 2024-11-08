#ifndef INSTAGRAMNOTIFICADOR_H
#define INSTAGRAMNOTIFICADOR_H

#include "Notificador.h"

class InstagramNotificador : public Notificador {
public:
    void enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) override;
};

#endif
