//
// Created by amirb on 02-09-2026.
//

#ifndef AYUDANTIA1_SISTEMA_H
#define AYUDANTIA1_SISTEMA_H

#include "../model/Libro.h"
#include "../struct/ArregloDinamico.h"

class Sistema {

    ArregloDinamico libros;

public:
    Sistema();

    void mostrarMenu();
    void menu();
    void crearLibro();
    void mostrarLibro(int id);
    void leerArchivo(std::string nombreArchivo);

};


#endif //AYUDANTIA1_SISTEMA_H
