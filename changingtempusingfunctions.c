//write a funtion to convert celsius to fahrenheit

#include<stdio.h>

void celtofah(float t);
void fahtocel(float t);

int main()
{
	float t;
	char m;
	printf("c = celsius to fahrenheit\n");
	printf("\n");
	printf("f = fahrenheit to celsius\n");
	printf("\n");
	printf("Enter c or f: ");
	scanf("%c",&m);
	if (m == 'c')
	{
		printf("\n");
		printf("Enter temperature in celsius: ");
		scanf("%f",&t);
		celtofah(t);
	}
	
	else if (m == 'f')
	{
		printf("\n");
		printf("Enter temperature in fahrenheit: ");
		scanf("%f",&t);
		fahtocel(t);
	}
	
	else
	{
		printf("\n");
		printf("please enter either 'c' or 'f' ");
		printf("\n");
	}
	
	printf("\n");
	printf("\nThank You");
	return 0;
}

void celtofah(float t)
{
	float f = (((t*9)/5) + 32);
	printf("\n");
	printf("The temperature in fahrenheit is %f",f);
}

void fahtocel(float t)
{
	float c = ((t-32)*5)/9;
	printf("\n");
	printf("The temperature in celsius is %f",c);
	printf("\n");
}
