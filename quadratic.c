//to find the roots of a quadratic equation
#include<stdio.h>
int main()
{
	int a,b,c,d,x1,x2;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	d = ((b*b)-(4*a*c));
	printf("The determinant is: %d\n",d);
	x1 = ((-b+sqrt(d)/(2*a)));
	x2 = ((-b-sqrt(d)/(2*a)));
	if (d<0)
	{
		printf("The given quadratic equation has imaginary roots.\n");
	}
	
	else if (d==0)
	{
		printf("The given quadratic equation has equal roots.\n");
		printf("The first root is: %d\n",x1);
		printf("The second root is: %d\n",x2);
	}
	
	else if (d>0)
	{
		printf("The given quadratic equation has distinct roots.\n");
		printf("The first root is: %d\n",x1);
		printf("The second root is: %d\n",x2);
	}
	printf("Thank You");
	return 0;
}
