//to calculate factorial of a given number n
#include<stdio.h>

int fact(int n);

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d", fact(n));
	return 0;
}

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	int factNm1=fact(n-1);
	int factNm=fact(n-1)*n;
	return factNm;
}
