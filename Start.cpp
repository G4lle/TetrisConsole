#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

void consoleLinkage() { 
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    SetConsoleTextAttribute(out, 6);
}