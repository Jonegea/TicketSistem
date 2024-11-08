#include "../include/SistemaNotificaciones.h"

void SistemaNotificaciones::agregarNotificacion(Notificador* notificador) {
    notificacionesActivas.push_back(notificador);
}

void SistemaNotificaciones::notificarUsuario(const Usuario& usuario, const Mensaje& mensaje) {
    for (auto* notificador : notificacionesActivas) {
        notificador->enviarNotificacion(mensaje, usuario);
    }
}
