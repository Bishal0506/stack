#define MAXITEMS 4
#include <stdio.h>
#include<conio.h>
typedef struct{
int top;
int items[MAXITEMS];
}stack;
void  push(stack*,int);
int pop(stack*);
main()
{
	stack s;
	s.top=-1;
	push(&s,5);
	push(&s,8);
	push(&s,7);
	push(&s,99);
	push(&s,54);
	push(&s,69);
	push(&s,69);

	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
}
void push(stack*s,int x)
{
	if((s->top)>3)
	{
	printf("Stack Overflow");
	}
	else{
		s->items[++(s->top)]=x;
	}
}
int pop(stack*s)
{
	if((s->top)<-1)
	{
	printf("Stack Underflow");
}
else
{
	return (s->items[(s->top)--]);
}
}
