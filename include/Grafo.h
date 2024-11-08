#ifndef GRAFO_H
#define GRAFO_H

#include "Ubicacion.h"
#include <vector>
#include <map>
#include <limits>

class Grafo {
private:
    std::map<int, Ubicacion> ubicaciones; // Map de id de ubicación a objeto Ubicacion
    std::map<int, std::map<int, double>> adyacencias; // Distancias entre ubicaciones

public:
    // Agrega una ubicación al grafo
    void agregarUbicacion(const Ubicacion& ubicacion);

    // Conecta dos ubicaciones con una distancia
    void conectarUbicaciones(int idOrigen, int idDestino, double distancia);

    // Devuelve la distancia entre dos ubicaciones
    double obtenerDistancia(int idOrigen, int idDestino) const;

    // Implementación de Dijkstra para encontrar la ruta más corta
    std::vector<int> encontrarRutaMasCorta(int idOrigen, int idDestino);
};

#endif // GRAFO_H
