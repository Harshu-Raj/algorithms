#include<stdio.h>
#include<stdlib.h>
#define MAXSTK 5
struct stack
{
	int arr[MAXSTK];
	int top;
};
struct stack s;
void push(int);
int pop();
void display();
void push(int item)
{
	if(s.top==MAXSTK-1)
	{
		printf("\n Stack is full");
		return ;
	}
	else
	{
		s.top=s.top+1;
		s.arr[s.top]=item;
	}
	return;
}
int pop()
{
	int p;
	if(s.top==-1)
	{
		printf("\n Stack is Empty");
		return -1;
	}
	else
	{
		p=s.arr[s.top];
		s.top=s.top-1;
	}
	return p;
}
void display()
{
	int i;
	printf("\n the current stack is :");
	for(i=s.top;i>0;i--)
	printf("%d \n",s.arr[i]);
	printf("\n");
}
main()
{
	int item;
	int choice;
	s.top=-1;
	while (1)
	{
		printf("\n Enter 1 to push");
		printf("\n Enter 2 to pop");
		printf("\n Enter 3 to Display");
		printf("\n Enter 4 to exit");
		printf("\n Give your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\n Enter the element to push:");
			        scanf("%d",&item);
			        push(item);
			        break;
			case 2: printf("\n The popped item is %d ",pop());
			        break;
			case 3: display();
			        break;
			case 4: exit (0);
		}
	}
}
