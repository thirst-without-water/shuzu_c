#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_Count 10
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);         /*�������ã���ʼ������*/
void DisplayBoard(char board[ROWS][COLS],int row,int col);                 /*�������ã���ӡ����*/
void SetMine(char mine[ROWS][COLS], int row, int col);                     /*�������ã�������*/
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);/*�������ã��Ų���*/