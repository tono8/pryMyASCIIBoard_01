#pragma once
#include "hEntidad.h"
class Jugador {
private:
	int xJ = 57, yJ = 20, vidaJ = 10;
public:
	Jugador(int x, int y) : xJ(x), yJ(y) {};
	~Jugador() {};
    int returnJugadorX() {
        return xJ;
    }
    int returnJugadorY() {
        return yJ;
    }
    int returnSalud() {
        return vidaJ;
    }
    void hitJ(int vidaJ) {
        if (vidaJ > 0) {
            vidaJ--;
        }
    }
    void dibujaJugador_m1_v1(int x, int y) {

    }
    void borrarJugador_m1_v1(int x, int y) {

    }
};