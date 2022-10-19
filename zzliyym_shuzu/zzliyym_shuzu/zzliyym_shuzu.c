#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//A.主要内容：一维数组的创建和初始化、使用、在内存中的储存；二维数组的使用、在内存中的储存；数组作为函数参数、应用
//**一维数组的创建和初始化
//一.一维数组的创建
//数组是一组相同类型元素的集合。数组的创建方式:type_t arr_name [const_n];
//1."type_t"是指数组的元素类型
//int mian()
//{
//	int arr[8];/*数组的元素类型为‘int'*/
//	char arr[5];/*数组的元素类型为‘char’*/
//	return 0;
//}
//
// 
//2."const_n"是一个常量表达式，用来指定数组的大小
//int main()
//{
//	int n = 8;
//	int arr[n];                                       /*error(n为变量）*/
//	return 0;
//}
//
// 
//二.一维数组的初始化
//1.整型数组
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };          /*完全初始化*/
//	int arr2[5] = {1,2,3,4,5};                        /*不完全初始化*/
//  int arr3[] = { 1,2,3,4,5 }; <=> int arr3[5] = { 1,2,3,4,5 };
//	return 0;
//}
// 
// 
//2.字符数组
//int main()
//{
//	char arr1[5] = { 'y','y','m' };         /*元素为[y y m \0 \0]*/
//	char arr2[] = { 'y','y','m' };          /*元素为[y y m]*/
//	
//	char ch1[5] = "yym";                    /*元素为[y y m \0 0]*/
//	char ch2[] = "yym";                     /*元素为[y y m \0]*/
//	
//	char cp1[] = "yym";                     /*元素为[y y m \0]*/
//	char cp2[] = { 'y','y','m' };           /*元素为[y y m]*/
//	printf("%d\n", strlen(cp1));            /*3*/
//	printf("%d\n", strlen(cp2));            /*随机值*/
//	return 0;
//}
// 
// 
//**一维数组的使用
//1.数组是使用下标来访问的，下标是从O开始。(“[]”下标引用操作符)
//2.数组的大小可以通过计算得到。（int sz = sizeof(arr) / sizeof(arr[0]);)
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;                             /*把第五个数换做5*/
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
// 
//**一维数组在内存中的储存
//1.一维数组在内存中是连续存放的!
//2.随着数组下标的增长，地址是由低到高变化的!
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]); /*%p是按地址的格式打印-十六进制的打印*/
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;                              /*数组名是数组首元素的地址*/
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		*p++;
//	}
//	return 0;
//}
// 
// 
//**二维数组的创建和初始化
//一.二维数组的创建
//int main()
//{
//	int arr[3][4];                              /*3行4列*/
//	char ch[3][10];                             /*3行10列*/
//	return 0;
//}
// 
// 
//二.二维数组的初始化
//1.
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };             /*完全初始化*/
//	int arr2[3][4] = { 1,2,3,4,5,6,7 };                          /*不完全初始化-后面补0*/
//	return 0;
//}
//2.
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	return 0;
//}
//3.行可以省略，列不能省略
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	return 0;
//}
//
// 
//**二维数组的使用
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//**二维数组在内存中的储存
//二维数组在内存中也是连续存放的!
//一行内部连续,跨行也是连续的!
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
// 
// 
//**数组作为函数参数
//一.数组名是什么？
//数组名是数组首元素的地址。
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	return 0;
//}
//
// 
//但是有2个例外：
//1.sizeof(数组名）–数组名表示整个数组–计算的是整个数组的大小单位是字节
//2.&数组名–数组名表示整个数组–取出的是整个数组的地址
//
// 
//总结：
//printf("%p\n", &arr);                           /*数组的地址*/
//printf("%p\n", arr);                            /*首元素的地址*/
//printf("%p\n", &arr[0]);                        /*首元素的地址*/
//int sz = sizeof(arr);                           /*数组名表示整个数组*/
//
//  
//二.冒泡排序
//a.
//void bubble_sort(int arr[],int sz) /*形参arr本质是指针*/
//{   /*确定趟数*/
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{  /*一趟冒泡排序的过程*/
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{   /*交换*/
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);	    /*计算数组元素个数*/
//	bubble_sort(arr, sz);                       /*数组传参的时候，传递的其实是数组首元素的地址*/
//	return 0;
//}
//b.优化
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{ 
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{ 
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}
//  
// 
//**应用
//一.三子棋
// 
// 
//二.扫雷
//
//
//内容见game1、game2文件夹
