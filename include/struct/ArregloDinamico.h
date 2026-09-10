//
// Created by amirb on 09-09-2026.
//

#ifndef AYUDANTIA1_ARREGLODINAMICO_H
#define AYUDANTIA1_ARREGLODINAMICO_H

#include "../model/Libro.h"

class ArregloDinamico {
    Libro** libros;
    int capacidad;
    int tamanio;

    void expandir();
    void reducir();

public:
    ArregloDinamico(int capacidadInicial = 1);
    ~ArregloDinamico();

    // Evitar copias superficiales (shallow copy) que llevan a double-free
    ArregloDinamico(const ArregloDinamico&) = delete;
    ArregloDinamico& operator=(const ArregloDinamico&) = delete;

    void agregar(const Libro& libro);
    Libro obtener(int indice) const;
};


#endif //AYUDANTIA1_ARREGLODINAMICO_H
