#include <stdio.h>
#include<stdlib.h>
#include"linklist.h"
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


		switch (i)
		{
		case 2:
			Link headlink = (LNode*)malloc(sizeof(LNode));
			headlink->next = NULL;
			do
			{

				printf("顺序表的二级菜单为：\n");
				printf("1.创建顺序线性表:\n");
				printf("2.求线性顺序表的长度\n");
				printf("3.按序号取线性表的元素\n");
				printf("4.按值查找线性表、\n");
				printf("5.插入元素\n");
				printf("6.删除元素\n");
				printf("7.输出顺序线性表\n");
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
					break;

				case 2:
					int num;
					num = Getlen(headlink);
					printf("%d\n", num);
					break;
				case 3:
					int node;
					Link t;
					scanf_s("%d", &node);
					t = Getnode(headlink, node);
					printf("%d\n", t->data);
					break;
				case 4:
					ElemType e1;
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e1);
					Getnum(headlink, e1);
					break;
				case 5:
					int pos;
					ElemType e;
					printf("please cin the pos\n");
					scanf_s("%d", &pos);
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e);
					insert(headlink, pos, e);
					break;
				case 6:
					int pos1, k;
					printf("please cin the pos\n");
					scanf_s("%d", &pos1);
					k = Delete(headlink, pos1);
					if (k == 0)
						printf("successful delete\n ");
					break;
				case 7:
					showlist(headlink);
					break;
				case 8:
					flag = 0;
					break;
				}
			} while (flag);
			break;
		}
	} while (flag1);
	return 0;
}
