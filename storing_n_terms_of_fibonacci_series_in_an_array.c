// write a program to store the first n fibonacci numbers

#include<stdio.h>

int main()
{
	int n,n1=0,n2=1,n3;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("%d ",n1);
	printf("%d ",n2);
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		arr[i]=n3;
		n1=n2;
		n2=n3;
	}
	
	printf("\n");
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;	
}
