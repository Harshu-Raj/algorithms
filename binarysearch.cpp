#include<stdio.h>
void binarysearch(int key,int a[],int n);
int main()
{
	int a[100],i,key,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements in the array in sorted order:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	binarysearch(key,a,n);
}
void binarysearch(int key,int a[],int n)
{
	int l,h,m,j;
	l=0;
	h=n-1;
	j=-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(key==a[m])
		{
			j=m;
			break;
		}
		else
		{
			if(key>a[m])
			{
				l=m+1;
			}
			else
			{
				h=m-1;
			}
		}
		
	}
	if(j==-1)
	{
		printf("Element not found");
		
	}
	else
	{
		printf("Element is found");
	}
}
