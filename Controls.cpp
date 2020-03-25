#include <iostream>
#include <cairo.h>
#include <cairo.h>
#include <gtk/gtk.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include "Blocks.h"
#include "matrix_manipulation.h"


void UserInput(int count, int matrix[][20], int y, int x, int type, int orientation) {

    char key = NULL;
    count += 1;

    if (_kbhit()) {
        key = _getch();
    }



}