//
// Created by amirb on 02-09-2026.
//

#include "../include/model/Libro.h"

Libro::Libro(): titulo(""), autor(""), fecha("") {}

Libro::Libro(std::string titulo, std::string autor, std::string fecha) {
    this->titulo = titulo;
    this->autor = autor;
    this->fecha = fecha;
}

Libro::~Libro() {}

std::string Libro::getTitulo() {
    return this->titulo;
}

std::string Libro::getAutor() {
    return this->autor;
}

std::string Libro::getFecha() {
    return this->fecha;
}

void Libro::setTitulo(std::string titulo) {
    this->titulo = titulo;
}

void Libro::setAutor(std::string autor) {
    this->autor = autor;
}

void Libro::setFecha(std::string fecha) {
    this->fecha = fecha;
}