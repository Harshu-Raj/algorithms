#include<stdio.h>
int main()
{
	int i, low, high, mid, n, k, a[50];
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the value to find:");
	scanf("%d",&k);
	low=0;
	high=n-1;
    while (low <= high) 
	{
        mid = (low + high) / 2;

        if (a[mid] < k)
            low = mid + 1;
        else if (a[mid] > k)
            high = mid - 1;
        else 
		{
            printf("\n %d found at location %d", k, mid + 1);
            break;
        }
    }

    if (low > high)
        printf("\n Not found! %d isn't present in the list", k);
}
