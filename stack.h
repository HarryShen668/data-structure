#include<stdio.h>
#define Stack_size 100
typedef int Elemtype;
typedef struct stack
{
	Elemtype elem[Stack_size];
	int top;
}SqStack;
int initstack(SqStack* s)
{
	s->top = -1;
	return 0;
}
int Push(SqStack* s, Elemtype e)
{
	if (s->top>=Stack_size-1)
	{
		printf("ERROE\n");
		return 0;
	}
	s->top++;
	s->elem[s->top] = e;
	return 0;
}
int Pop(SqStack*s)
{
	printf("%d", s->elem[s->top]);
	s->top = s->top - 1;
	return 0;
}
int getop(SqStack* s)
{
	printf("%d", s->elem[s->top]);
	return 0;
}
int emptystack(SqStack* s)
{
	if (s->top == -1)
	{
		printf("empty\n");
		return 0;
	}
	printf("not\n");
	return 1;
}
int transnum(int x, int n)
{
	SqStack s;
	int e;
	initstack(&s);
	printf("\n\n\t\t十进制为：%d\n", x);
	while (x)
	{
		Push(&s, x%n);
		x = x / n;
	}
	printf("%d进制为",n);
	while (emptystack(&s))
	{
		Pop(&s);
	}
	printf("\n\n");
	return 0;
}
