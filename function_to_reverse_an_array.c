//write a function to reverse an array
#include<stdio.h>

int reverse(int arr[],int n);

int main()
{
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\n");
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %dth element of array: ",(i+1));
		scanf("%d",&arr[i]);
		printf("\n");
	}
		
	
	reverse(arr,n);
	
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	return 0;
}

int reverse(int arr[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int firstval = arr[i];
		int secondval = arr[n-i-1];
		arr[i] = secondval;
		arr[n-i-1]=firstval;
	}
	
}
