#pragma once
//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���ŵĶ���
#define ROW 3
#define COL 3
//����������
void Initboard(char board[ROW][COL], int row, int col);     /*�������ã���ʼ������*/
void DisplayBoard(char board[ROW][COL], int row, int col);  /*�������ã���ӡ����*/
void PlayerMove(char board[ROW][COL], int row, int col);    /*�������ã��������*/
void ComputerMove(char board[ROW][COL], int row, int col);  /*�������ã���������*/
char IsWin(char board[ROW][COL], int row, int col);         /*�������ã��ж���Ӯ*/