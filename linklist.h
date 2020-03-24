#include <stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	LNode* next;
}LNode, * Link;//存储结点

int create(Link L, int n)
{

	int i; ElemType x; Link p;
	for (i = 1; i <= n; i++)
	{
		printf("请输入第%d个数据：",i );
		scanf_s("%d", &x);
		p = (LNode*)malloc(sizeof(LNode));
		p->data = x;
		p->next = L->next;
		L->next = p;
		L = p;

	}
	return 0;
}
int Getlen(Link L) {
	int num = 0;
	LNode *p;
	p = L->next;
	while (p != NULL)
	{
		num++;
		p = p->next;
	}
	return(num);
}
Link Getnode(Link headlink, int i)
{
	int j; Link p;
	p = headlink; j = 0;
	while (p->next && j < i) {
		p = p->next;
		j++;
	}
	if (i == j)return p;
	else return NULL;
}
int insert(Link headlink, int i, ElemType e)
{
	Link p, s;
	p = Getnode(headlink, i-1);
	if (p == NULL)
	{
		printf("ERROR\n");
		return 0;
	}
	s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next ;
	p->next=s;
	return 0;
}
int Delete(Link headlink,int i)
{
	Link p, r;
	p = Getnode(headlink, i - 1);
	if (p == NULL || p->next == NULL)
	{
		printf("ERROR\n");
		return 1;
	}
	r = p->next;
	p->next = r->next;
	free(r);
	return 0;
}
int showlist(Link headlink) {
	Link p;
	p = headlink->next;
	while (p != NULL) {
		printf("->%d", p->data);
			p = p->next;		
	}
	printf("->^\n");
	return 0;
}
Link Getnum(Link headlink, int i)
{
	Link p; int t=1;
	p = headlink->next;
	while (p->data!=i&&p->next!=NULL) {
		p = p->next;
		t++;
	}
	if (p->next == NULL)
		printf("not find\n");
	else
		printf("%d\n", t);
	return p;
}
