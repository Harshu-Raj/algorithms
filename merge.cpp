#include<stdio.h>
#include<stdlib.h>
void merge (int a[], int low, int mid, int high)
{
	int i, j, k;
	int temp[50];
	i=low;
	j=mid + 1;
	k=low;
    while (i<=mid && j<= high) 
	{
        if (a[i] <= a[j])
           temp[k++]=a[i++];
        else
           temp[k++]=a[j++];
    }
    while (i <= mid)
        temp[k++]=a[i++];
    while (j<=mid)
    	temp[k++]=a[j++];
    for(i=low;i<=high;i++)
        a[i]=temp[i];
}
void msortdiv(int a[],int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		msortdiv(a,low,mid);
		msortdiv(a, mid + 1, high);
		merge(a,low,mid,high);
	}
}
int main()
	{
		int a[50], n, i;
		printf("\nEnter the size of array :");
		scanf("%d",&n);
		printf("\nEnter the elements:");
		for(i=0;i<n;i++)
		    scanf("%d",&a[i]);
		msortdiv(a,0,n-1);
		printf("\n After sorting:");
		for(i=0;i<n;i++)
		    printf("%d ",a[i]);
		    printf("\n");
	}
