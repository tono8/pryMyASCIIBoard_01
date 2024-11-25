#pragma once
#include "hDependencias.h"
#include "hJugador.h"
class Board : protected Jugador { // no tengo ni idea de porque uso "protected" en lugar de private
private:
public:
	Board() {};
	~Board() {};

	void boardOne() {

		system("cls");
		char _key;

		setBtnW(false);
		setBtnA(false);
		setBtnS(false);
		setBtnD(false);

		while (true) {
			if (_kbhit()) {
				_key = getch();
				_key = toupper(_key);
				this->borrarJugador_m1_v1(xJ, yJ);
				this->moverJugadorWASD(_key);
			}
			dibujarJugador();
		}

		_sleep(4);
	}
};