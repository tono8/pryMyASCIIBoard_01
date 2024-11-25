#pragma once
#include "iostream"
#include "conio.h"
#include "vector"
#include "stdio.h"
#include "sstream"
#include "cstdlib"
#include "chrono"
#include "thread"
#include "ctime"

#define COLUMNAS 140
#define FILAS 30

using namespace System;
using namespace System::Drawing;
using namespace std;

void p(int x, int y) {
    Console::SetCursorPosition(x, y);
}
void wS(int width, int height) {
    Console::SetWindowSize(width, height);
    Console::CursorVisible = false;
}

void b_c(int bg) {
    switch (bg) {
    case 1: Console::BackgroundColor = ConsoleColor::Black; break;
    case 2: Console::BackgroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::BackgroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::BackgroundColor = ConsoleColor::DarkCyan; break;
    case 5: Console::BackgroundColor = ConsoleColor::DarkRed; break;
    case 6: Console::BackgroundColor = ConsoleColor::DarkMagenta; break;
    case 7: Console::BackgroundColor = ConsoleColor::DarkYellow; break;
    case 8: Console::BackgroundColor = ConsoleColor::Gray; break;
    case 9: Console::BackgroundColor = ConsoleColor::DarkGray; break;
    case 10: Console::BackgroundColor = ConsoleColor::Blue; break;
    case 11: Console::BackgroundColor = ConsoleColor::Green; break;
    case 12: Console::BackgroundColor = ConsoleColor::Cyan; break;
    case 13: Console::BackgroundColor = ConsoleColor::Red; break;
    case 14: Console::BackgroundColor = ConsoleColor::Magenta; break;
    case 15: Console::BackgroundColor = ConsoleColor::Yellow; break;
    case 16: Console::BackgroundColor = ConsoleColor::White; break;
    }
}
void f_c(int fg) {
    switch (fg) {
    case 1: Console::ForegroundColor = ConsoleColor::Black; break;
    case 2: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    case 5: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 6: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 7: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 8: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 9: Console::ForegroundColor = ConsoleColor::DarkGray; break;
    case 10: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 11: Console::ForegroundColor = ConsoleColor::Green; break;
    case 12: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 13: Console::ForegroundColor = ConsoleColor::Red; break;
    case 14: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 15: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 16: Console::ForegroundColor = ConsoleColor::White; break;
    }
}

// Pruebas para determinar compatibilidad
void testColor_c12_1(int x, int y) {
    p(x + 1, y); b_c(1), f_c(16); cout << char(220) << char(220) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(223); p(x + 11, y + 1); cout << char(223) << char(219);
    p(x, y + 2); cout << char(219) << char(220); p(x + 11, y + 2); cout << char(220) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(223) << char(223);
    p(x + 6, y + 4); f_c(1); cout << "1";
    p(x + 4, y + 6); f_c(16); cout << "Black";
    p(x + 3, y + 7); f_c(16); cout << "(Negro)";
}
void testColor_c12_2(int x, int y) {
    p(x + 1, y); f_c(2); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "2";
    p(x + 3, y + 6); f_c(16); cout << "DarkBlue";
    p(x, y + 7); f_c(16); cout << "(Azul Oscuro)";
}
void testColor_c12_3(int x, int y) {
    p(x + 1, y); f_c(3); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "3";
    p(x + 3, y + 6); f_c(16); cout << "DarkGreen";
    p(x, y + 7); f_c(16); cout << "(Verde Oscuro)";
}
void testColor_c12_4(int x, int y) {
    p(x + 1, y); f_c(4); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "4";
    p(x + 3, y + 6); f_c(16); cout << "DarkCyan";
    p(x, y + 7); f_c(16); cout << "(Cian Oscuro)";
}
void testColor_c12_5(int x, int y) {
    p(x + 1, y); f_c(5); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "5";
    p(x + 3, y + 6); f_c(16); cout << "DarkRed";
    p(x, y + 7); f_c(16); cout << "(Rojo Oscuro)";
}
void testColor_c12_6(int x, int y) {
    p(x + 1, y); f_c(6); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "6";
    p(x + 1, y + 6); f_c(16); cout << "DarkMagenta";
    p(x - 2, y + 7); f_c(16); cout << "(Magenta Oscuro)";
}
void testColor_c12_7(int x, int y) {
    p(x + 1, y); f_c(7); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "7";
    p(x + 2, y + 6); f_c(16); cout << "DarkYellow";
    p(x - 1, y + 7); f_c(16); cout << "(Amarillo Oscuro)";
}
void testColor_c12_8(int x, int y) {
    p(x + 1, y); f_c(8); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "8";
    p(x + 5, y + 6); f_c(16); cout << "Gray";
    p(x + 4, y + 7); f_c(16); cout << "(Gris)";
}
void testColor_c12_9(int x, int y) {
    p(x + 1, y); f_c(9); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "9";
    p(x + 3, y + 6); f_c(16); cout << "DarkGray";
    p(x, y + 7); f_c(16); cout << "(Gris Oscuro)";
}
void testColor_c12_10(int x, int y) {
    p(x + 1, y); f_c(10); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "10";
    p(x + 5, y + 6); f_c(16); cout << "Blue";
    p(x + 4, y + 7); f_c(16); cout << "(Azul)";
}
void testColor_c12_11(int x, int y) {
    p(x + 1, y); f_c(11); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "11";
    p(x + 4, y + 6); f_c(16); cout << "Green";
    p(x + 3, y + 7); f_c(16); cout << "(Verde)";
}
void testColor_c12_12(int x, int y) {
    p(x + 1, y); f_c(12); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "12";
    p(x + 5, y + 6); f_c(16); cout << "Cyan";
    p(x + 4, y + 7); f_c(16); cout << "(Cian)";
}
void testColor_c12_13(int x, int y) {
    p(x + 1, y); f_c(13); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "13";
    p(x + 5, y + 6); f_c(16); cout << "Red";
    p(x + 3, y + 7); f_c(16); cout << "(Rojo)";
}
void testColor_c12_14(int x, int y) {
    p(x + 1, y); f_c(14); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "14";
    p(x + 3, y + 6); f_c(16); cout << "Magenta";
    p(x + 2, y + 7); f_c(16); cout << "(Magenta)";
}
void testColor_c12_15(int x, int y) {
    p(x + 1, y); f_c(15); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "15";
    p(x + 4, y + 6); f_c(16); cout << "Yellow";
    p(x + 2, y + 7); f_c(16); cout << "(Amarillo)";
}
void testColor_c12_16(int x, int y) {
    p(x + 1, y); f_c(16); cout << char(220) << char(220) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(220) << char(220);
    p(x, y + 1); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223);
    p(x + 6, y + 4); cout << "16";
    p(x + 4, y + 6); f_c(16); cout << "White";
    p(x + 3, y + 7); f_c(16); cout << "(Blanco)";
}
// TERMINOLOGIA: [nombre]_[modedlo###]_[version###.###]
void testColor_m1_v1(int x, int y) {
    testColor_c12_1(x, y);
    testColor_c12_2(x + 16, y);
    testColor_c12_3(x + 32, y);
    testColor_c12_4(x + 48, y);
    testColor_c12_5(x + 64, y);
    testColor_c12_6(x + 80, y);
    testColor_c12_7(x + 96, y);
    testColor_c12_8(x + 112, y);
    testColor_c12_9(x, y + 10);
    testColor_c12_10(x + 16, y + 10);
    testColor_c12_11(x + 32, y + 10);
    testColor_c12_12(x + 48, y + 10);
    testColor_c12_13(x + 64, y + 10);
    testColor_c12_14(x + 80, y + 10);
    testColor_c12_15(x + 96, y + 10);
    testColor_c12_16(x + 112, y + 10);
    b_c(1),f_c(16);
}