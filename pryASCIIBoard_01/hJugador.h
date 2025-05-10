#pragma once
class Jugador {
protected:
	int xJ = 57, yJ = 20, anchoJ = 8, altoJ = 4, vidaJ = 100;
    int dxJ = 1;
    int dyJ = 1;
    bool keyWActive, keyAActive, keySActive, keyDActive;
    bool btnW, btnA, btnS, btnD;
    bool btnUpArrow, btnLeftArrow, btnDownArrow, btnRightArrow;
public:
    Jugador() {};
	Jugador(int x, int y) : xJ(x), yJ(y) {
    };
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

    void setBtnW(bool _btnW) {
        this->btnW = _btnW;
    };
    void setBtnA(bool _btnA) {
        this->btnA = _btnA;
    };
    void setBtnS(bool _btnS) {
        this->btnS = _btnS;
    };
    void setBtnD(bool _btnD) {
        this->btnD = _btnD;
    };

    void setBtnUpArrow(bool _btnUpArrow) {
        this->btnUpArrow = _btnUpArrow;
    };
    void setBtnLeftArrow(bool _btnLeftArrow) {
        this->btnLeftArrow = _btnLeftArrow;
    };
    void setBtnDownArrow(bool _btnDownArrow) {
        this->btnDownArrow = _btnDownArrow;
    };
    void setBtnRightArrow(bool _btnRightArrow) {
        this->btnRightArrow = _btnRightArrow;
    };

    void dibujaJugador_Izquierda_m1_v1(int x, int y) {
        p(x + 2, y); b_c(8), f_c(15); cout << char(220) << char(219) << char(219);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x + 2, y + 3); cout << char(223) << char(219) << char(219);
    }
    void dibujaJugador_ArribaIzquierda_m1_v1(int x, int y) {
        p(x, y); b_c(1), f_c(15); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(219) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x + 3, y + 3); cout << char(223) << char(219) << char(223);
    }
    void dibujaJugador_Arriba_m1_v1(int x, int y) {
        p(x + 2, y); b_c(8), f_c(15); cout << char(220) << char(219) << char(219) << char(220);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
        p(x + 2, y + 3); cout << char(219) << char(219) << char(219) << char(219);
    }
    void dibujaJugador_ArribaDerecha_m1_v1(int x, int y) {
        p(x + 2, y); b_c(1), f_c(15); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x + 1, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(219);
        p(x + 2, y + 3); cout << char(223) << char(219) << char(223);
    }
    void dibujaJugador_Derecha_m1_v1(int x, int y) {
        p(x + 3, y); b_c(8), f_c(15); cout << char(219) << char(219) << char(220);
        p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x + 3, y + 3); cout << char(219) << char(219) << char(223);
    }
    void dibujaJugador_AbajoDerecha_m1_v1(int x, int y) {
        p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(219) << char(220);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(219);
        p(x + 1, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x + 2, y + 3); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219);
    }
    void dibujaJugador_Abajo_m1_v1(int x, int y) {
        p(x + 2, y); b_c(8), f_c(15); cout << char(219) << char(219) << char(219) << char(219);
        p(x, y + 1); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
        p(x, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x + 2, y + 3); cout << char(223) << char(219) << char(219) << char(223);
    }
    void dibujaJugador_AbajoIzquierda_m1_v1(int x, int y) {
        p(x + 3, y); b_c(1), f_c(15); cout << char(220) << char(219) << char(220);
        p(x, y + 1); cout << char(219) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x, y + 3); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
    }
    void borrarJugador_m1_v1(int x, int y) {
        p(x, y); b_c(8), f_c(15); cout << "        ";
        p(x, y + 1); cout << "        ";
        p(x, y + 2); cout << "        ";
        p(x, y + 3); cout << "        ";
    }

    void dibujaJugador_Izquierda_m1_v1_i1(int x, int y) {
        p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(219) << char(219);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
        p(x + 2, y + 3); cout << char(223) << char(219) << char(219);
    }
    void dibujaJugador_Arriba_m1_v1_i1(int x, int y) {
        p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(219) << char(219) << char(220);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
        p(x + 2, y + 3); cout << char(219) << char(219) << char(219) << char(219);
    }
    void dibujaJugador_Derecha_m1_v1_i1(int x, int y) {
        p(x + 3, y); b_c(1), f_c(15); cout << char(219) << char(219) << char(220);
        p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220);
        p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x + 3, y + 3); cout << char(219) << char(219) << char(223);
    }
    void dibujaJugador_Abajo_m1_v1_i1(int x, int y) {
        p(x + 2, y); b_c(1), f_c(15); cout << char(219) << char(219) << char(219) << char(219);
        p(x, y + 1); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
        p(x, y + 2); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223);
        p(x + 2, y + 3); cout << char(223) << char(219) << char(219) << char(223);
    }

    void dibujarJugador() {
        b_c(1), f_c(15);
        if (dxJ != 0 || dyJ != 0) {
            if (btnW) {
                dibujaJugador_Arriba_m1_v1(xJ, yJ);
            }
            else if (btnA) {
                dibujaJugador_Izquierda_m1_v1(xJ, yJ);
            }
            else if (btnS) {
                dibujaJugador_Abajo_m1_v1(xJ, yJ);
            }
            else if (btnD) {
                dibujaJugador_Derecha_m1_v1(xJ, yJ);
            }
        }
        b_c(1), f_c(16);
    }

    void moverJugadorWASD(char _key) {
        if (_key == 'W') {
            keyWActive = true;
            keyAActive = false;
            keySActive = false;
            keyDActive = false;
        }
        if (_key == 'A') {
            keyWActive = false;
            keyAActive = true;
            keySActive = false;
            keyDActive = false;
        }
        if (_key == 'S') {
            keyWActive = false;
            keyAActive = false;
            keySActive = true;
            keyDActive = false;
        }
        if (_key == 'D') {
            keyWActive = false;
            keyAActive = false;
            keySActive = false;
            keyDActive = true;
        }
        if (keyWActive && yJ > 3) {
            yJ -= dyJ;
            this->btnW = true;
            this->btnA = false;
            this->btnS = false;
            this->btnD = false;
        }
        if (keyAActive && xJ > 18) {
            xJ -= dxJ;
            this->btnW = false;
            this->btnA = true;
            this->btnS = false;
            this->btnD = false;
        }
        if (keySActive && yJ < 72 - 4) { // - 4 Por el tamaño del jugador
            yJ += dyJ;
            this->btnW = false;
            this->btnA = false;
            this->btnS = true;
            this->btnD = false;
        }
        if (keyDActive && xJ < 132 - 8) { // - 8 Por el tamaño del jugador
            xJ += dxJ;
            this->btnW = false;
            this->btnA = false;
            this->btnS = false;
            this->btnD = true;
        }
    }
    Rectangle obtenerRectangulo() {
        return Rectangle(xJ, yJ, anchoJ, altoJ);
    }
};