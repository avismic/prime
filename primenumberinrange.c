//write a program to print all prime numbers in a range
#include<stdio.h>
int main()
{
	int a,b,n,m,j=2;
	printf("Enter the first element of range: ");
	scanf("%d",&a);
	printf("Enter the last element of range: ");
	scanf("%d",&b);
	for(int i=a;i<=b;i++)
	{
		int is_prime=1;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				is_prime=0;
				break;
			}
		}
		if (is_prime)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
