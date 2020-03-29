#include <iostream>
#include <Windows.h>
#include "Blocks.h"

void initBlock(currentBlock block, int type, int orientation, int x, int y){ //initializes the current block with some spawn, type and rotation.
	block.orientation = orientation;
	block.x = x;
	block.y = y;
	block.type = type;
}

void blockSelect(int matrix[][20], currentBlock block)
{
	// Printing Square-Block
	if (block.type == 1) {
		SquareDraw(matrix, block);
	}
	// Printing non-invertet L-Block
	else if (block.type == 2) {
		LDraw(matrix, block);
	}
	// Printing invertet L-Block
	else if (block.type == 3) {
		InvLDraw(matrix, block);
	}
	// Printing non-invertet Z-Block
	else if (block.type == 4) {
		ZDraw(matrix, block);
	}
	// Printing non-invertet Z-Block
	else if (block.type == 5) {
		InvZDraw(matrix, block);
	}
	// Printing non-invertet Z-Block
	else if (block.type == 6) {
		TDraw(matrix, block);
	}
	// Printing non-invertet Z-Block
	else if (block.type == 7) {
		HeroDraw(matrix, block);
	}

	else {};
}
void SquareDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	// Draws The Square block with only one orientation (doesn't change with rotation)
	matrix[block.x][block.y] = 1;
	matrix[block.x + 1][block.y] = 1;
	matrix[block.x][block.y + 1] = 1;
	matrix[block.x + 1][block.y + 1] = 1;
}
void LDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	//Sets the block.orientation of the block according to user input.
	//This one draws the non-inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y-1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y+1] = 1;
		matrix[block.x+1][block.y+1] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x+1][block.y] = 1;
		matrix[block.x-1][block.y] = 1;
		matrix[block.x-1][block.y+1] = 1;
		matrix[block.x][block.y] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x-1][block.y-1] = 1;
		matrix[block.x][block.y-1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y+1] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x+1][block.y-1] = 1;
		matrix[block.x+1][block.y] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x-1][block.y] = 1;
		
	}
}
void InvLDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y + 1] = 1;
		matrix[block.x - 1][block.y + 1] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x + 1][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x + 1][block.y + 1] = 1;
		matrix[block.x][block.y] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x + 1][block.y - 1] = 1;
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y + 1] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x - 1][block.y -1] = 1;
		matrix[block.x + 1][block.y] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		
	}
}
void ZDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y-1] = 1;
		matrix[block.x+1][block.y-1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x][block.y-1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x + 1][block.y] = 1;
		matrix[block.x+1][block.y+1] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x][block.y] = 1;
		matrix[block.x+1][block.y] = 1;
		matrix[block.x][block.y+1] = 1;
		matrix[block.x-1][block.y + 1] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x][block.y] = 1;
		matrix[block.x-1][block.y-1] = 1;
		matrix[block.x-1][block.y] = 1;
		matrix[block.x][block.y+1] = 1;
		
	}
}
void InvZDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y-1] = 1;
		matrix[block.x-1][block.y-1] = 1;
		matrix[block.x + 1][block.y] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x - 1][block.y + 1] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x][block.y + 1] = 1;
		matrix[block.x + 1][block.y + 1] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x-1][block.y + 1] = 1;
		
	}
}
void TDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x + 1][block.y] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y-1] = 1;
		matrix[block.x][block.y+1] = 1;
		matrix[block.x+1][block.y] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x+1][block.y] = 1;
		matrix[block.x][block.y + 1] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x][block.y + 1] = 1;
		matrix[block.x - 1][block.y] = 1;
		
	}
}
void HeroDraw(int matrix[][20], currentBlock block)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	//Sets the orientation of the block according to user input.
	//This one draws the Inverted L-Block
	if (block.orientation == 1) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y-1] = 1;
		matrix[block.x][block.y+1] = 1;
		matrix[block.x][block.y+2] = 1;
	}
	else if (block.orientation == 2) {
		matrix[block.x][block.y] = 1;
		matrix[block.x-1][block.y] = 1;
		matrix[block.x+1][block.y] = 1;
		matrix[block.x + 2][block.y] = 1;
	}
	else if (block.orientation == 3) {
		matrix[block.x][block.y] = 1;
		matrix[block.x][block.y + 1] = 1;
		matrix[block.x][block.y - 1] = 1;
		matrix[block.x][block.y - 2] = 1;
	}
	else if (block.orientation == 4) {
		matrix[block.x][block.y] = 1;
		matrix[block.x + 1][block.y] = 1;
		matrix[block.x - 1][block.y] = 1;
		matrix[block.x - 2][block.y] = 1;

	}
}

