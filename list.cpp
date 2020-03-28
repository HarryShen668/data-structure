#include <stdio.h>
#include<stdlib.h>
#include"linklist.h"
#include"linelist.h"
int main()
{
	int i;
	int flag1 = 1;
start:
	do 
	{
		printf("线性表的主菜单为：\n");
		printf("1.顺序表\n");
		printf("2.链表\n");
		printf("3.退出\n");
		scanf_s("%d", &i);
		system("cls");
		int flag = 1;
		int flag2 = 1;
		switch (i)
		{
		case 1://顺序表
			Sqlist L;
			do
			{
				printf("顺序表的二级菜单为：\n");
				printf("1.创建顺序线性表:\n");
				printf("2.求线性顺序表的长度\n");
				printf("3.按序号取线性顺序表的元素\n");
				printf("4.按值查找线性顺序表\n");
				printf("5.插入元素\n");
				printf("6.删除元素\n");
				printf("7.输出顺序线性表\n");
				printf("8.返回\n");
				int g;
				scanf_s("%d", &g);
				system("cls");
				switch (g)
				{
				case 1:
					Creatlist(&L);
					break;//创建顺序线性表

				case 2:
					getlen(&L);
					break;//求线性顺序表的长度
				case 3:
					int n;
					int t;
					scanf_s("%d", &n);
					t = getelem( &L,n);
					break;//按序号取线性表的元素
				case 4:
					ElemType e3;
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e3);
					Locate(&L, e3);
					break;//按值查找线性表
				case 5:
					int pos;
					ElemType e;
					printf("please cin the pos\n");
					scanf_s("%d", &pos);
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e);
					Insert( &L, pos, e);
					break;//插入元素
				case 6:
					int pos1, k;
					ElemType e4;
					printf("please cin the pos\n");
					scanf_s("%d", &pos1);
					k = linedelete(&L, pos1,&e4);
					if (k == 0)
						printf("successful delete\n ");
					break;//删除元素
				case 7:
					showlinelist( & L);
					break;//输出顺序线性表
				case 8:
					flag2 = 0;
					break;//返回
				}
			} while (flag2);
			break;
		case 2://链表
			Link headlink = (LNode*)malloc(sizeof(LNode));
			headlink->next = NULL;
			do
			{

				printf("链表的二级菜单为：\n");
				printf("1.创建线性链表:\n");
				printf("2.求线性链表的长度\n");
				printf("3.按序号取线性链表的元素\n");
				printf("4.按值查找线性链表、\n");
				printf("5.插入元素\n");
				printf("6.删除元素\n");
				printf("7.输出线性链表\n");
				printf("8.返回\n");
				int y;
				scanf_s("%d", &y);
				system("cls");
				switch (y)
				{
				case 1:
					printf("表长：\n");
					int n;
					scanf_s("%d", &n);
					create(headlink, n);
					break;//创建线性链表

				case 2:
					int num;
					num = Getlen(headlink);
					printf("%d\n", num);
					break;//求线性链表的长度
				case 3:
					int node;
					Link t;
					scanf_s("%d", &node);
					t = Getnode(headlink, node);
					printf("%d\n", t->data);
					break;//按序号取线性链表的元素
				case 4:
					ElemType e1;
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e1);
					Getnum(headlink, e1);
					break;//按值查找线性链表
				case 5:
					int pos;
					ElemType e;
					printf("please cin the pos\n");
					scanf_s("%d", &pos);
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e);
					insert(headlink, pos, e);
					break;//插入元素
				case 6:
					int pos1, k;
					printf("please cin the pos\n");
					scanf_s("%d", &pos1);
					k = Delete(headlink, pos1);
					if (k == 0)
						printf("successful delete\n ");
					break;//删除元素
				case 7:
					showlist(headlink);
					break;//输出线性链表
				case 8:
					flag = 0;
					break;//返回
				}
			} while (flag);
			break;

		}		
	} while (flag1);
	return 0;
}
