
#ifndef _BLOCK_
#define _BLOCK_


void blockSelect(int type, int orientation, int matrix[][20], int x, int y);

void SquareDraw(int matrix[][20], int orientation, int x, int y);

void LDraw(int matrix[][20], int orientation, int x, int y);

void InvLDraw(int matrix[][20], int orientation, int x, int y);

void ZDraw(int matrix[][20], int orientation, int x, int y);

void InvZDraw(int matrix[][20], int orientation, int x, int y);

void TDraw(int matrix[][20], int orientation, int x, int y);

void HeroDraw(int matrix[][20], int orientation, int x, int y);

#endif