#include "../include/EmailNotificador.h"
#include <iostream>

void EmailNotificador::enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) {
    std::cout << "Enviando notificación por Email a " << usuario.getNombre() << ": " << mensaje.getContenido() << std::endl;
}
