#include "../include/InstagramNotificador.h"
#include <iostream>

void InstagramNotificador::enviarNotificacion(const Mensaje& mensaje, const Usuario& usuario) {
    std::cout << "Enviando notificación por Instagram a " << usuario.getNombre() << ": " << mensaje.getContenido() << std::endl;
}
