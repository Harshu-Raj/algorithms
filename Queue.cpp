#include<stdio.h>
#define MAX 6
void enqueue();
void dequeue();
void display();
int queue[MAX], Front=-1, Rear=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("\n Press 1 for enqueue \n Press 2 for dequeue  \n Press 3 for display \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			default:printf("Wrong choice!");
		}
	}
	return 0;
}
		void enqueue()
		{
			int item;
			if(Rear == MAX -1)
			printf("\n Queue is full");
			else if(Rear== -1 && Front == -1)
			{
				Rear=0; 
				Front=0;
			}
			else
			Rear = Rear+1;
			printf("\n Enter the item:");
			scanf("%d",&item);
			queue[Rear]=item;
		}
		void dequeue()
		{
			int item;
		    if(Rear == -1 && Front == -1)
		    printf("\n Queue is empty");
		    else if(Rear == Front)
		    {
		    	item = queue[Front];
		    	Rear = -1;
		    	Front = -1;
			}
			else
			{
				item = queue[Front];
				Front = Front + 1;
			}
			printf("\n deleting item %d .....",item);
		}
		void display()
		{
			int i;
			if(Rear == -1 && Front == -1)
			printf("\n Queue is empty");
			else
			{
				for(i=Front;i<=Rear;i++)
				{
					printf("%d /t",queue[i]);
			}
		}
	}
