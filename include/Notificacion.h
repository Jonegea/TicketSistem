#ifndef NOTIFICACION_H
#define NOTIFICACION_H

#include <string>
#include "Mensaje.h"

class Notificacion {
private:
    int id;
    Mensaje mensaje;
    bool leido;

public:
    Notificacion(int id, const Mensaje& mensaje);
    void marcarLeido();
};

#endif
