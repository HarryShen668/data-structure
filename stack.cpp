#include <stdio.h>
#include<stdlib.h>
#include"stack.h"
int main()
{
	int flag = 1;
start:
	SqStack s;
			do
			{
				printf("栈的二级菜单为：\n");
				printf("1.初始化栈:\n");
				printf("2.压栈\n");
				printf("3.弹栈\n");
				printf("4.取栈顶元素\n");
				printf("5.判栈空\n");
				printf("6.十进制转换N进制\n");
				printf("7.退出\n");
				int y;
				scanf_s("%d", &y);
				system("cls");
				switch (y)
				{
				case 1:
					initstack(&s);
					break;

				case 2:
					Elemtype e1;
					printf("now cin the Elemtype\n");
					scanf_s("%d", &e1);
					Push(&s, e1);
					break;
				case 3:
					Pop(&s);
					break;
				case 4:
					getop(&s);
					break;
				case 5:
					emptystack(&s);
					break;
				case 6:
					int x, n;
					printf("now cin the num\n");
					scanf_s("%d", &x);
					printf("now cin the trans\n");
					scanf_s("%d", &n);
					transnum(x, n);
					break;
				case 7:
					flag = 0;
					break;
				}
			} while (flag);
	return 0;
}
