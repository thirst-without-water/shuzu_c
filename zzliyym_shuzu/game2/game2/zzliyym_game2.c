#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void menu()
{
	printf("***************************\n");
	printf("********   1.play   *******\n");
	printf("********   0.exit   *******\n");
	printf("***************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };               /*��Ų��úõ��׵���Ϣ*/
	char show[ROWS][COLS] = { 0 };               /*����Ų�����׵���Ϣ*/
	InitBoard(mine,ROWS,COLS,'0');               /*��ʼ������*/
	InitBoard(show, ROWS, COLS,'*');
                
	DisplayBoard(show, ROW, COL);                /*��ӡ����*/
	SetMine(mine,ROW,COL);                       /*������*/
	FindMine(mine, show, ROW, COL);              /*�Ų���*/

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				game();
				break;
		   case 0:
			   printf("�˳���Ϸ\n");
			   break;
		   default:
			   printf("�������������ѡ��\n");
			   break;
		}
	} while (input);
	return 0;
}
//����Ϸ�����Ż��ĵ�
//1.���������,��Χû���ס���չ��һƬ���ݹ飩
//2.�����