#include "hBoard.h"

int main()
{
    //RESOLUCION CON COMPATIBILIDAD AL 100%
    //140 PIXELES ANCHO, 60 PIXELES ALTO, TAMAÑO DE FUENTE DE LETRA 16
    wS(140, 30);

    Board* objBoard;
    objBoard = new Board();

    //testColor_m1_v1(2, 1);

    //COMMANDO PRINCIPAL
    objBoard->boardOne();

    system("pause>0");
    return 0;
}

//VIDEO:
// El video mostrara todo el juego desde ganar hasta perder
// Tiene que ser descrito oralmente por los 3 integrantes