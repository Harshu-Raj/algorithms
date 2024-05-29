#include<stdio.h>
void quicksort (int x[], int first, int last)
{
	int pivot, i, temp, j;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot] && i<last)
			i++;
			while(x[j]>x[pivot])
			j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quicksort(x,first,j-1);
		quicksort(x,j+1,last);
	}
}     
main()
{
	int n,k,a[30];
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(k=0;k<n;k++)
	scanf("%d",&a[k]);
	printf("\n The array is :");
	for(k=0;k<n;k++)
	printf("%d \t",a[k]);
	quicksort(a,0,n-1);
	printf("\n The sorted array is:");
	for(k=0;k<n;k++)
	printf("%d \t",a[k]);
}
