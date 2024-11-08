#include "Grafo.h"
#include <queue>
#include <algorithm>

void Grafo::agregarUbicacion(const Ubicacion& ubicacion) {
    ubicaciones[ubicacion.obtenerId()] = ubicacion;
}

void Grafo::conectarUbicaciones(int idOrigen, int idDestino, double distancia) {
    adyacencias[idOrigen][idDestino] = distancia;
    adyacencias[idDestino][idOrigen] = distancia; // Para grafo no dirigido
}

double Grafo::obtenerDistancia(int idOrigen, int idDestino) const {
    if (adyacencias.count(idOrigen) && adyacencias.at(idOrigen).count(idDestino)) {
        return adyacencias.at(idOrigen).at(idDestino);
    }
    return std::numeric_limits<double>::infinity();
}

std::vector<int> Grafo::encontrarRutaMasCorta(int idOrigen, int idDestino) {
    std::map<int, double> distancias;
    std::map<int, int> previos;
    std::priority_queue<std::pair<double, int>, std::vector<std::pair<double, int>>, std::greater<>> cola;

    // Inicializar distancias con infinito
    for (std::map<int, Ubicacion>::const_iterator it = ubicaciones.begin(); it != ubicaciones.end(); ++it) {
        int id = it->first;
        distancias[id] = std::numeric_limits<double>::infinity();
    }
    distancias[idOrigen] = 0;
    cola.emplace(0, idOrigen);

    // Algoritmo de Dijkstra
    while (!cola.empty()) {
        int actual = cola.top().second;
        cola.pop();

        if (actual == idDestino) break;

        for (std::map<int, double>::const_iterator it = adyacencias[actual].begin(); it != adyacencias[actual].end(); ++it) {
            int vecino = it->first;
            double distancia = it->second;
            double nuevaDistancia = distancias[actual] + distancia;

            if (nuevaDistancia < distancias[vecino]) {
                distancias[vecino] = nuevaDistancia;
                previos[vecino] = actual;
                cola.emplace(nuevaDistancia, vecino);
            }
        }
    }

    // Reconstruir la ruta más corta
    std::vector<int> ruta;
    for (int at = idDestino; at != idOrigen; at = previos[at]) {
        ruta.push_back(at);
    }
    ruta.push_back(idOrigen);
    std::reverse(ruta.begin(), ruta.end());
    return ruta;
}
