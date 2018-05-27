#ifndef MOVE_H_
#define MOVE_H_

int PawnMove (int y, int x, int y1, int x1, char (*A)[10], int hod);
int PawnMoveWhite (int y, int x, int y1, int x1, char (*A)[10], int hod);
int PawnMoveBlack (int y, int x, int y1, int x1, char (*A)[10], int hod);

#endif
