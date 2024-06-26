#include "Fabrica.h"
#include <iostream>
#include <string>

using namespace::std;

int main() {
    Fabrica* fabrica = Fabrica::getInstancia(); // Obtener la instancia de Fabrica
    InterfazUsuario* interfazU = fabrica->getControladorUsuario(); // Obtener la instancia de ControladorUsuario
    InterfazPartida* interfazP = fabrica->getControladorPartida(); // Obtener la instancia de ControladorPartida
    InterfazVideojuego* interfazV = fabrica->getControladorVideojuego(); // Obtener la instancia de ControladorVideojuego

    cout << "--OK--" << endl;

    return 0;
}
