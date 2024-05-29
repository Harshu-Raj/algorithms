#include <stdio.h> 
#include <stdlib.h>
typedef struct node
{
int data;
struct node*next;
} 
node;
int main()
{
	int a, i=1,n,r;
	node *p, *q, *start=NULL;
	printf("\n Enter the no. of nodes:");
	scanf("%d",&n);
	printf("\n Enter node %d :",i);
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data=a;
	p->next=NULL;
	start=p;
	for(i=2;i<=n;i++)
	{
		printf("\n Enter node %d \n",i);
		q=(node*)malloc(sizeof(node));
		scanf("%d",&a);
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=q;
	}
	printf("\n Linked list elements:");
	p=start;
	while(p != NULL)
	{
		printf("%d -> ",p->data);
		p=p->next;
	}
	printf("NULL \n");
	p=start;
	while(p != NULL)
	{
		q = p -> next;
		free(p);
		p = q;
	}
}
