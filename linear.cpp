#include<stdio.h>
int main()
{
	int n,a[40],i,j,k;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the no. for search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("\n %d the no. is present in %d",k,i+1);
			break;
		}
	}
	if(i==n)
	printf("\n %d the no. is not present in array",k);
	return 0;
}
