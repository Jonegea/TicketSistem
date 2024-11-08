#include "../include/WhatsappNotificador.h"
#include <iostream>

void WhatsappNotificador::enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) {
    std::cout << "Enviando notificación por WhatsApp a " << usuario.getNombre() << ": " << mensaje.getContenido() << std::endl;
}
