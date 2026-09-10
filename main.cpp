#include "include/service/Sistema.h"
#include <iostream>

int main() {
    try {
        Sistema sistema;
        sistema.leerArchivo("Libro.csv");
        sistema.menu();
    } catch (const std::exception &ex) {
        std::cerr << "Excepción capturada: " << ex.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Excepción desconocida capturada." << std::endl;
        return 1;
    }
    return 0;
}
