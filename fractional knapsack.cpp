#include<stdio.h>

void sort(int n,float p[50],float w[50],float v[50])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[j]>p[i])
			{
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
				
				temp=w[j];
				w[j]=w[i];
				w[i]=temp;
				
				temp=v[j];
				v[j]=v[i];
				v[i]=temp;
				
			}
		}
	}
}


int knapsackpart(int c,float p[50],float w[50],float v[50],int n)
{
	int i=0,t=0;
	for(i=0;i<n;i++)
	{
		if(t<c)
		{
			if((t+w[i])>c)
			{
				w[i]=c-t;
				v[i]=w[i]*p[i];
				t=c;
			}
			else
			{
				t=w[i]+t;
			}
		
		}
		else
		{
			break;
		}
	}
	return i;
}

int main()

{
	int i,j,n;
	float p[50],w[50],v[50],c;
	float sum_vi=0.0,sum_wi=0.0;
	printf("Enter the number of items:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the weight of each item:\n");
		scanf("%f",&w[i]);
		printf("\nEnter the value of each item:\n");
		scanf("%f",&v[i]);
		
		p[i]=v[i]/w[i];
	}
	printf("\nEnter the capacity of the knapsack:");
	scanf("%f",&c);
	sort(n,p,w,v);
	n=knapsackpart(c,p,w,v,n);
	for(i=0;i<n;i++)
	{
		printf("\n%f",w[i]);
		printf("\t%f",v[i]);
		printf("\t%f",p[i]);
		
		sum_vi=sum_vi+v[i];
		sum_wi=sum_wi+w[i];
		
	}
	
	printf("\nSum of value:%f",sum_vi);
	printf("\nsum of weight:%f",sum_wi);
}
