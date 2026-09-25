cmake_minimum_required(VERSION 4.3)
project(ayudantia1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ayudantia1 main.cpp
        model/Libro.cpp
        include/model/Libro.h
        model/Prestamo.cpp
        include/model/Prestamo.h
        service/Sistema.cpp
        include/service/Sistema.h
        struct/ArregloDinamico.cpp
        include/struct/ArregloDinamico.h
        struct/ListaPrestamos.cpp
        include/struct/ListaPrestamos.h
)
