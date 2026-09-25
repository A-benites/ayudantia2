//
// Created by amirb on 09-04-2026.
//

#ifndef AYUDANTIA_LISTAPRESTAMOS_H
#define AYUDANTIA_LISTAPRESTAMOS_H

#include "../model/Prestamo.h"

class NodoPrestamo {
public:
    Prestamo dato;
    NodoPrestamo* siguiente;

    NodoPrestamo(const Prestamo& dato, NodoPrestamo* siguiente = nullptr)
        : dato(dato), siguiente(siguiente) {
    }
};

class ListaPrestamos {
    NodoPrestamo* cabeza;

public:
    ListaPrestamos();
    ~ListaPrestamos();

    void insertar(const Prestamo& prestamo);
    void mostrar() const;
    bool eliminar(int idLibro, int idUsuario);
    bool estaVacia() const;
};

#endif // AYUDANTIA_LISTAPRESTAMOS_H
