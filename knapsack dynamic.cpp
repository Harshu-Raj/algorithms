#include<stdio.h>
 void sort(int n,float wt[50],float p[])
 {
 	int i,j,temp;
 	for(i=0;i<n;i++)
 	
 	{
 		for(j=i+1;j<n;j++)
		 {
		 	if(p[i]<p[j])
		 	{
		 		temp=p[i];
				 p[i]=p[j];
				 p[j]=temp;
				 
				 temp=wt[i];
				 wt[i]=wt[j];
				 wt[j]=temp;
				 
				 
			}
		 }	
	}
 }
 void knapsack(int n,float p[50],float wt[50],float c)
 {
 	int i,j;
 	float total=0.0;
 	float tpft=0.0;
 	for (i=0;i<n;i++)
 	{
 		if((total+wt[i])<=c)
 		{
 			total+=wt[i];
 			tpft+=p[i];
		 }
		 else
		 {
		 	for(j=i+1;j<n;j++)
		 	{
		 		if((total+wt[j])<=c)
		 		{
		 			total+=wt[j];
		 			tpft+=p[j];
				 }
		 		
			 }
		 }
	 }
	 printf("\n Total weight:%f",total);
	 printf("\n Total profit:%f",tpft);
 }
 
 int main()

{
	int i,j,n;
	float v[50],wt[50],c;
	float sum_vi=0.0,sum_wi=0.0;
	printf("Enter the number of items:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the weight of each item:\n");
		scanf("%f",&wt[i]);
		printf("\nEnter the value of each item:\n");
		scanf("%f",&v[i]);
		
//		p[i]=v[i]/w[i];
	}
	printf("\nEnter the capacity of the knapsack:");
	scanf("%f",&c);
	sort(n,wt,v);
	for(i=0;i<n;i++)
	{
		printf("\n%f",wt[i]);
		printf("\t%f",v[i]);
	}
	
	knapsack(n,v,wt,c);
}
	
