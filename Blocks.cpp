#include <iostream>
#include <Windows.h>
#include "Blocks.h"


void blockSelect(int type, int orientation, int matrix[][20], int x, int y)
{
	// Printing Square-Block
	if (type == 1) {
		SquareDraw(matrix, orientation, x, y);
	}
	// Printing non-invertet L-Block
	else if (type == 2) {
		LDraw(matrix, orientation, x, y);
	}
	// Printing invertet L-Block
	else if (type == 3) {
		InvLDraw(matrix, orientation, x, y);
	}
	// Printing non-invertet Z-Block
	else if (type == 4) {
		ZDraw(matrix, orientation, x, y);
	}
	// Printing non-invertet Z-Block
	else if (type == 5) {
		InvZDraw(matrix, orientation, x, y);
	}
	// Printing non-invertet Z-Block
	else if (type == 6) {
		TDraw(matrix, orientation, x, y);
	}
	// Printing non-invertet Z-Block
	else if (type == 7) {
		HeroDraw(matrix, orientation, x, y);
	}

	else {};
}
void SquareDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	// Draws The Square block with only one orientation (doesn't change with rotation)
	matrix[x][y] = 1;
	matrix[x + 1][y] = 1;
	matrix[x][y + 1] = 1;
	matrix[x + 1][y + 1] = 1;
}
void LDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	//Sets the orientation of the block according to user input.
	//This one draws the non-inverted L-Block
	if (orientation == 1) {
		matrix[x][y-1] = 1;
		matrix[x][y] = 1;
		matrix[x][y+1] = 1;
		matrix[x+1][y+1] = 1;
	}
	else if (orientation == 2) {
		matrix[x+1][y] = 1;
		matrix[x-1][y] = 1;
		matrix[x-1][y+1] = 1;
		matrix[x][y] = 1;
	}
	else if (orientation == 3) {
		matrix[x-1][y-1] = 1;
		matrix[x][y-1] = 1;
		matrix[x][y] = 1;
		matrix[x][y+1] = 1;
	}
	else if (orientation == 4) {
		matrix[x+1][y-1] = 1;
		matrix[x+1][y] = 1;
		matrix[x][y] = 1;
		matrix[x-1][y] = 1;
		
	}
}
void InvLDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (orientation == 1) {
		matrix[x][y - 1] = 1;
		matrix[x][y] = 1;
		matrix[x][y + 1] = 1;
		matrix[x - 1][y + 1] = 1;
	}
	else if (orientation == 2) {
		matrix[x + 1][y] = 1;
		matrix[x - 1][y] = 1;
		matrix[x + 1][y + 1] = 1;
		matrix[x][y] = 1;
	}
	else if (orientation == 3) {
		matrix[x + 1][y - 1] = 1;
		matrix[x][y - 1] = 1;
		matrix[x][y] = 1;
		matrix[x][y + 1] = 1;
	}
	else if (orientation == 4) {
		matrix[x - 1][y -1] = 1;
		matrix[x + 1][y] = 1;
		matrix[x][y] = 1;
		matrix[x - 1][y] = 1;
		
	}
}
void ZDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (orientation == 1) {
		matrix[x][y-1] = 1;
		matrix[x+1][y-1] = 1;
		matrix[x][y] = 1;
		matrix[x - 1][y] = 1;
	}
	else if (orientation == 2) {
		matrix[x][y-1] = 1;
		matrix[x][y] = 1;
		matrix[x + 1][y] = 1;
		matrix[x+1][y+1] = 1;
	}
	else if (orientation == 3) {
		matrix[x][y] = 1;
		matrix[x+1][y] = 1;
		matrix[x][y+1] = 1;
		matrix[x-1][y + 1] = 1;
	}
	else if (orientation == 4) {
		matrix[x][y] = 1;
		matrix[x-1][y-1] = 1;
		matrix[x-1][y] = 1;
		matrix[x][y+1] = 1;
		
	}
}
void InvZDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (orientation == 1) {
		matrix[x][y] = 1;
		matrix[x][y-1] = 1;
		matrix[x-1][y-1] = 1;
		matrix[x + 1][y] = 1;
	}
	else if (orientation == 2) {
		matrix[x][y - 1] = 1;
		matrix[x][y] = 1;
		matrix[x - 1][y] = 1;
		matrix[x - 1][y + 1] = 1;
	}
	else if (orientation == 3) {
		matrix[x][y] = 1;
		matrix[x - 1][y] = 1;
		matrix[x][y + 1] = 1;
		matrix[x + 1][y + 1] = 1;
	}
	else if (orientation == 4) {
		matrix[x][y] = 1;
		matrix[x][y - 1] = 1;
		matrix[x - 1][y] = 1;
		matrix[x-1][y + 1] = 1;
		
	}
}
void TDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (orientation == 1) {
		matrix[x][y] = 1;
		matrix[x][y - 1] = 1;
		matrix[x - 1][y] = 1;
		matrix[x + 1][y] = 1;
	}
	else if (orientation == 2) {
		matrix[x][y] = 1;
		matrix[x][y-1] = 1;
		matrix[x][y+1] = 1;
		matrix[x+1][y] = 1;
	}
	else if (orientation == 3) {
		matrix[x][y] = 1;
		matrix[x - 1][y] = 1;
		matrix[x+1][y] = 1;
		matrix[x][y + 1] = 1;
	}
	else if (orientation == 4) {
		matrix[x][y] = 1;
		matrix[x][y - 1] = 1;
		matrix[x][y + 1] = 1;
		matrix[x - 1][y] = 1;
		
	}
}
void HeroDraw(int matrix[][20], int orientation, int x, int y)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (orientation == 1) {
		matrix[x][y] = 1;
		matrix[x][y-1] = 1;
		matrix[x][y+1] = 1;
		matrix[x][y+2] = 1;
	}
	else if (orientation == 2) {
		matrix[x][y] = 1;
		matrix[x-1][y] = 1;
		matrix[x+1][y] = 1;
		matrix[x + 2][y] = 1;
	}
	else if (orientation == 3) {
		matrix[x][y] = 1;
		matrix[x][y + 1] = 1;
		matrix[x][y - 1] = 1;
		matrix[x][y - 2] = 1;
	}
	else if (orientation == 4) {
		matrix[x][y] = 1;
		matrix[x + 1][y] = 1;
		matrix[x - 1][y] = 1;
		matrix[x - 2][y] = 1;

	}
}

