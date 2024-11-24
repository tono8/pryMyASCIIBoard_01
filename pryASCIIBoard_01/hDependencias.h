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

#define DERECHA 77
#define IZQUIERDA 75
#define ARRIBA 72
#define ABAJO 80

#define COLUMNAS 140
#define FILAS 30

using namespace System;
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