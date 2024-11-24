#include "iostream"
#include "conio.h"

#include "hBoard.h"

int main()
{
    //RESOLUCION CON COMPATIBILIDAD AL 100%
    //140 PIXELES ANCHO, 60 PIXELES ALTO, TAMAÑO DE FUENTE DE LETRA 16
    wS(140, 30);

    Board* oBoard;
    oBoard = new Board();

    //COMMANDO PRINCIPAL
    //opresentacion->PRESENTACION();

    system("pause>0");
    return 0;
}

//VIDEO:
// El video mostrara todo el juego desde ganar hasta perder (excepto el objetivo principal)
// Tiene que ser descrito oralmente por los 3 integrantes