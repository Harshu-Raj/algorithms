#include <stdio.h>
int main() 
{
	int n,i,j,a[20],min,t;
	printf("\n Enter the size of the array :");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("\n The array is :");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(min != i)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
