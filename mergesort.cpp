#include<stdio.h>
void merge(int a[],int l1,int l2,int u1,int u2)
{
	int p,q,i,j,n;
	int d[100];
	p=l1;
	q=l2;
	n=0;
	
	while((p<=u1) && (q<=u2))
	{
		d[n++]=a[p]<a[q]?a[p++]:a[q++];
	
	}
//	printf("World1");
	while(p<=u1)
	{
		d[n++]=a[p++];
	}
//	printf("World2");
	while(q<=u2)
	{
		d[n++]=a[q++];
	}
//	printf("World3");
	
	for(j=l1,i=0;j<=u2;j++,i++)
	{
		a[j]=d[i];
	}
//	printf("World4");
}

void mergesort(int a[],int l,int u)
{
	
	int mid;
	if(l<u)
	{
		mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
//		printf("HEllo");
		merge(a,l,mid+1,mid,u);
	}
}

int main()
{
	int i,n,a[100];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Now enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Array after sorting:\n");
	mergesort(a,0,n-1);
//	printf("hrllo");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		
	}
	
}
