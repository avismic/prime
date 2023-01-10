//write a program to calculate the percentage of a student from marks in different subjects

#include<stdio.h>

void percentage(float a,float b,float c,float d,float e);

int main()
{
	float a,b,c,d,e;
	printf("Enter your marks in English: ");
	scanf("%f",&a);
	printf("\n");
	printf("Enter your marks in Hindi: ");
	scanf("%f",&b);
	printf("\n");
	printf("Enter your marks in Sanskrit: ");
	scanf("%f",&c);
	printf("\n");
	printf("Enter your marks in Science: ");
	scanf("%f",&d);
	printf("\n");
	printf("Enter your marks in Maths: ");
	scanf("%f",&e);
	printf("\n");
	percentage(a,b,c,d,e);
	printf("\n");
	printf("Thank You");
	return 0;
}

void percentage(float a,float b,float c,float d,float e)
{
	float p= (a+b+c+d+e)/5;
	printf("\n");
	printf("The percentage is: %f",p);
	printf("\n");
}
