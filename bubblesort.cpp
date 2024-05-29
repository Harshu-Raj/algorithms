#include <stdio.h>
int main() 
{
	int n,i,j;
	float arr[10],temp;
	printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n Enter elements:");
    for (i = 0; i < n; i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	} 
	printf("\n The sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%f \t",arr[i]);
	}return 0;
}
