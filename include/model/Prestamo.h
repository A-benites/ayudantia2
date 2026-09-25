//
// Created by amirb on 09-04-2026.
//

#ifndef AYUDANTIA_PRESTAMO_H
#define AYUDANTIA_PRESTAMO_H

class Prestamo {
    int idLibro;
    int idUsuario;

public:
    Prestamo();
    Prestamo(int idLibro, int idUsuario);

    int getIdLibro() const;
    int getIdUsuario() const;
};

#endif // AYUDANTIA_PRESTAMO_H
