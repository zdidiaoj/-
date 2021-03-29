#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void Initboard(char board[ROW][COL], int row, int col);
void DispalyBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
