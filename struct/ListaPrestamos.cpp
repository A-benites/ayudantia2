#include "../include/struct/ListaPrestamos.h"

#include <iostream>

ListaPrestamos::ListaPrestamos() : cabeza(nullptr) {
}

ListaPrestamos::~ListaPrestamos() {
    NodoPrestamo* actual = cabeza;
    while (actual != nullptr) {
        NodoPrestamo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void ListaPrestamos::insertar(const Prestamo& prestamo) {
    cabeza = new NodoPrestamo(prestamo, cabeza);
}

void ListaPrestamos::mostrar() const {
    if (cabeza == nullptr) {
        std::cout << "No hay prestamos vigentes." << std::endl;
        return;
    }

    NodoPrestamo* actual = cabeza;
    int posicion = 1;

    while (actual != nullptr) {
        std::cout << "Prestamo " << posicion << ": "
                  << "idLibro=" << actual->dato.getIdLibro()
                  << ", idUsuario=" << actual->dato.getIdUsuario()
                  << std::endl;
        actual = actual->siguiente;
        posicion++;
    }
}

bool ListaPrestamos::eliminar(int idLibro, int idUsuario) {
    NodoPrestamo* actual = cabeza;
    NodoPrestamo* anterior = nullptr;

    while (actual != nullptr) {
        if (actual->dato.getIdLibro() == idLibro && actual->dato.getIdUsuario() == idUsuario) {
            if (anterior == nullptr) {
                cabeza = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }

            delete actual;
            return true;
        }

        anterior = actual;
        actual = actual->siguiente;
    }

    return false;
}

bool ListaPrestamos::estaVacia() const {
    return cabeza == nullptr;
}
