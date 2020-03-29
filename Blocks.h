
#ifndef _BLOCK_
#define _BLOCK_

class currentBlock {
public:
	int orientation;
	int type;
	int x;
	int y;
};

void initBlock(currentBlock block, int type, int orientation, int x, int y);

void blockSelect(int matrix[][20], currentBlock);

void SquareDraw(int matrix[][20], currentBlock block);

void LDraw(int matrix[][20], currentBlock block);

void InvLDraw(int matrix[][20], currentBlock block);

void ZDraw(int matrix[][20], currentBlock block);

void InvZDraw(int matrix[][20], currentBlock block);

void TDraw(int matrix[][20], currentBlock block);

void HeroDraw(int matrix[][20], currentBlock block);

#endif