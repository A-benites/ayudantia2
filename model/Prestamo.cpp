#include "../include/model/Prestamo.h"

Prestamo::Prestamo() : idLibro(0), idUsuario(0) {
}

Prestamo::Prestamo(int idLibro, int idUsuario)
    : idLibro(idLibro), idUsuario(idUsuario) {
}

int Prestamo::getIdLibro() const {
    return idLibro;
}

int Prestamo::getIdUsuario() const {
    return idUsuario;
}
