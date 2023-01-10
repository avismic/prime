//sum of n natural numbers using recursion 
#include<stdio.h>

int sum(int n);

int main()
{
	int m;
	m=sum(9);
	printf("%d",m);
	return 0;
}

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	int sumNm1=sum(n-1);
	int sumN=sumNm1+n;
	return sumN;
}
