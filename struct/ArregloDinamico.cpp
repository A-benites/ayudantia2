//
// Created by amirb on 09-09-2026.
//

#include "../include/struct/ArregloDinamico.h"

#include <iostream>
#include <cstdlib>
#include <stdexcept>

ArregloDinamico::ArregloDinamico(int capacidadInicial): capacidad(capacidadInicial), tamanio(0) {
    libros = (Libro**)std::malloc(capacidad * sizeof(Libro*));

    if (libros == nullptr) {
        std::cerr << "Error al asignar memoria inicial." << std::endl;
        exit(1);
    }
    // Inicializar punteros a nullptr para evitar lecturas de memoria no inicializada
    for (int i = 0; i < capacidad; ++i) {
        libros[i] = nullptr;
    }
}

ArregloDinamico::~ArregloDinamico() {
    for (int i = 0; i < tamanio; i++) {
        if (libros[i] != nullptr) {
            delete libros[i];
        }
    }
    std::free(libros);
}

void ArregloDinamico::expandir() {
    int viejaCap = capacidad;
    capacidad *= 2;
    Libro** temp = (Libro**) std::realloc(libros, capacidad * sizeof(Libro*));
    if (temp == nullptr) {
        std::cerr << "Error al expandir memoria." << std::endl;
        // conservar libros original y salir
        exit(1);
    }
    libros = temp;
    // Inicializar las nuevas posiciones a nullptr
    for (int i = viejaCap; i < capacidad; ++i) {
        libros[i] = nullptr;
    }
}

void ArregloDinamico::agregar(const Libro &libro) {
    if (tamanio == capacidad) {
        expandir();
    }
    libros[tamanio++] = new Libro(libro);
}

Libro ArregloDinamico::obtener(int indice) const {
    if (indice < 0 || indice >= tamanio) {
        throw std::out_of_range("Índice fuera de rango");
    }
    if (libros[indice] == nullptr) {
        throw std::out_of_range("Elemento nulo en el índice solicitado");
    }
    return *libros[indice];
}
