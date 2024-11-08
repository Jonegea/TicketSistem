#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>
#include <ctime>

class Mensaje {
private:
    int id;
    std::string contenido;
    std::time_t fecha;
    bool esDeCliente;

public:
    Mensaje(int id, const std::string& contenido, bool esDeCliente);
    std::string getContenido() const;
    bool esCliente() const;
};

#endif
