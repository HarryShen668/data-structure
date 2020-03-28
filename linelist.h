#include <stdio.h>
#include<stdlib.h>
#define List_size 100
typedef int ElemType;
typedef struct node {
	ElemType elem[List_size];
	int length;
}Sqlist;
int Creatlist(Sqlist *L)
{
	L->length = 0;
	return 0;
}//创建顺序线性表
int getlen(Sqlist* L) 
{
	printf("%d\n", L->length);
	return L->length;
}//求线性顺序表的长度
ElemType getelem(Sqlist* L,int i) 
{
	if (i<1 || i>L->length)
	{
		printf("error");
		return 0;
	}
	printf("%d\n",L->elem[i-1]);
	return L->elem[i - 1];
}//按序号取线性表的元素
int Locate(Sqlist* L, ElemType x)
{
	int i = 0;
	while (i < L->length && L->elem[i] != x)
		i++;
	if (i == L->length) {
		printf("error\n");
		return 0;
	}
	else {
		printf("%d\n", i + 1);
		return i + 1;
	}
}//按值查找线性表
int Insert(Sqlist* L, int i, ElemType x)
{
	if (i<1 || i>L->length+1)
	{
		printf("error");
		return 0;
	}
	if (L->length>= List_size)
	{
		printf("full");
		return 0;
	}
	int j;
	for (j = L->length - 1; j >= i - 1; j--)
		L->elem[j + 1] = L->elem[j];
	L->elem[i - 1] = x;
	L->length++;
	return 0;	
}//插入
int linedelete(Sqlist* L, int i, ElemType *e)
{
	if (i<1 || i>L->length)
	{
		printf("error");
		return 1;
	}
	*e = L->elem[i - 1];
	int j;
	for (j = i; j <= L->length; j++)
		L->elem[j - 1] = L->elem[j];
	L->length--;
	return 0;	
}//删除
int showlinelist(Sqlist* L)
{
	for (int i = 1; i <= L->length; i++)
		printf("%d", L->elem[i-1]);
	return 0;
}//输出顺序线性表
