#ifndef WHATSAPPNOTIFICADOR_H
#define WHATSAPPNOTIFICADOR_H

#include "Notificador.h"

class WhatsappNotificador : public Notificador {
public:
    void enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) override;
};

#endif
