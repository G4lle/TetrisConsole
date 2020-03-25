#include <iostream>
#include <Windows.h>

void printMatrix(int matrix[][20]);
void drawMatrix(int matrix[][20]);
void setMatrix(int matrix[][20]);
void initMatrix(int matrix[][20]);

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMatrix(int matrix[][20]) {
    for (int j = 0; j < 20; j++) {
        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                std::cout << matrix[i][j] << "\n";
            }
            else {
                std::cout << matrix[i][j] << " ";
            }
        }
    }

}

void drawMatrix(int matrix[][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (matrix[i][j] != 0) {
                gotoxy(i, j);
            std::cout << "#";
        }
            else {
                gotoxy(i, j);
                printf(" ");
            }
        }
    }
}

void initMatrix(int matrix[][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            matrix[i][j] = 0;
        }
    }
}


void setMatrix(int matrix[][20]) {

    int sel = 0;
    
    // generate random number between 0 and 1 and insert in array
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            sel = rand() % 2;

            matrix[i][j] = sel;
        }
    }
}
