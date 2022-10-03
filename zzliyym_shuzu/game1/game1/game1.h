#pragma once
//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//符号的定义
#define ROW 3
#define COL 3
//函数的声明
void Initboard(char board[ROW][COL], int row, int col);     /*函数作用：初始化棋盘*/
void DisplayBoard(char board[ROW][COL], int row, int col);  /*函数作用：打印棋盘*/
void PlayerMove(char board[ROW][COL], int row, int col);    /*函数作用：玩家下棋*/
void ComputerMove(char board[ROW][COL], int row, int col);  /*函数作用：电脑下棋*/
char IsWin(char board[ROW][COL], int row, int col);         /*函数作用：判断输赢*/