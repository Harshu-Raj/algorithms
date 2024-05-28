#include <stdio.h>  
int partition(int arr[], int low, int high) {  
   int pivot=arr[low];
   int j;
   int i=low;
   int temp=0;
   for( j=low+1;j<=high;j++)
   {
   	if(arr[j]<=pivot)
   	{
   		i++;
   		temp=arr[i];
   		arr[i]=arr[j];
   		arr[j]=temp;
	   }
   }
   		temp=arr[i];
   		arr[i]=arr[low];
   		arr[low]=temp;
   		return i;
}  
void quicksort(int arr[], int low, int high) {  
    if (low < high) {  
       int mid=partition(arr,low,high);
       quicksort(arr,low,mid);
       quicksort(arr,mid+1,high);
    }  
}  
  
// Function to print the array  
void printArray(int arr[], int size) {  
    int i;  
    for (i = 0; i < size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  
  
int main() {  
    int i,n,arr[100];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Now enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
    quicksort(arr,0,n-1);
    printf("Sorted array: \n");  
    printArray(arr, n);  
    return 0;  
}  
