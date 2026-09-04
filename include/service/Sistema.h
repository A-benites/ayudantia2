//
// Created by amirb on 02-09-2026.
//

#ifndef AYUDANTIA1_SISTEMA_H
#define AYUDANTIA1_SISTEMA_H

#include "../model/libro.h"

class Sistema {

Libro libros[10];
int id_actual;

public:
    Sistema();

    void mostrarMenu();
    void menu();
    void crearLibro();
    void mostrarLibro(int id);
};


#endif //AYUDANTIA1_SISTEMA_H
