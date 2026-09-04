//
// Created by amirb on 02-09-2026.
//

#include "../include/service/Sistema.h"

#include <iostream>
#include "../include/model/Libro.h"

Sistema::Sistema() {
    id_actual = 0;
}

void Sistema::mostrarMenu() {
    std::cout << "1. Crear libro"<< std::endl;
    std::cout << "2. Mostrar libro"<< std::endl;
    std::cout << "3. Salir"<< std::endl;
    std::cout << "Eliga una de estas opciones: " << std::endl;

}

void Sistema::menu() {

    bool terminar = false;
    while (!terminar) {
        mostrarMenu();
        std::string opcion;
        std::cin >> opcion;

        switch (std::stoi(opcion)) {
            case 1:
                crearLibro();
                break;
            case 2: {
                std::string id_libro;
                std::cout << "Ingrese el id del libro: ";
                std::cin >> id_libro;

                mostrarLibro(std::stoi(id_libro));
                break;
            }
            case 3:
                std::cout << "chao";
                terminar = true;
                break;

            default:
                std::cout << "Opcion no valida";

                mostrarMenu();
                std::string opcion;
                std::cin >> opcion;
                break;
        }
    }

}

void Sistema::crearLibro() {

    std::string titulo;
    std::string autor;
    std::string fecha;

    std::cout << "Ingrese titulo del libro: ";
    std::cin >> titulo;

    std::cout << "Ingrese autor del libro: ";
    std::cin >> autor;

    std::cout << "Ingrese fecha del libro: ";
    std::cin >> fecha;

    Libro libro = Libro(titulo, autor, fecha);

    libros[id_actual] = libro;
    id_actual++;

}

void Sistema::mostrarLibro(int id) {
    std::cout<<"ID: "<<id<<std::endl;
    std::cout<<"Titulo: "<<libros[id].getTitulo()<<std::endl;
    std::cout<<"Autor: "<<libros[id].getAutor()<<std::endl;
    std::cout<<"Fecha: "<<libros[id].getFecha()<<std::endl;

}
