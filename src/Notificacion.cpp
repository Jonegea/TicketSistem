#include "../include/Notificacion.h"

Notificacion::Notificacion(int id, const Mensaje& mensaje)
    : id(id), mensaje(mensaje), leido(false) {}

void Notificacion::marcarLeido() {
    leido = true;
}
