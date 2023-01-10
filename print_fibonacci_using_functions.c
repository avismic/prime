//write a function to print n terms of a fibonacci sequence

#include<stdio.h>

void fibonacci(int n);

int main()
{
	int n;
	printf("Enter number of terms:");
	scanf("%d",&n);
	fibonacci(n);
	
	return 0;
}

void fibonacci(int n)
{
	int n1=0,n2=1,n3;
	printf("%d ",n1);
	printf("%d ",n2);
	for (int i=0;i<=n;i++)
	{
		n3= n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
	}
}
