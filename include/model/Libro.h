//
// Created by amirb on 02-09-2026.
//

#ifndef AYUDANTIA1_LIBRO_H
#define AYUDANTIA1_LIBRO_H
#include <string>


class Libro {
    //privado por defecto
    std::string titulo;
    std::string autor;
    std::string fecha;

    public:
        Libro();
        Libro(std::string titulo, std::string autor, std::string fecha);
        ~Libro(); //destructor

        //getters
        std::string getTitulo();
        std::string getAutor();
        std::string getFecha();

        //setters
        void setTitulo(std::string titulo);
        void setAutor(std::string autor);
        void setFecha(std::string fecha);

};


#endif //AYUDANTIA1_LIBRO_H
