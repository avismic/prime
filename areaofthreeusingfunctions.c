#include<stdio.h>

float area_square(float side);
float area_circle(float radius);
float area_rectangle(float l, float b);


int main()
{
	char c;
	printf("s=square\n");
	printf("c=circle\n");
	printf("r=rectangle\n");
	printf("Enter s,c or r: ");
	scanf("%c",&c);
	if(c=='s')
	{
		float side;
		printf("Enter the length of side: ");
		scanf("%f",&side);
		area_square(side);
	}
	
	if(c=='c')
	{
		float radius;
		printf("Enter the length of radius: ");
		scanf("%f",&radius);
		area_circle(radius);
	}
	
	if(c=='r')
	{
		float l,b,m;
		printf("Enter the length: ");
		scanf("%f",&l);
		printf("Enter the breadth: ");
		scanf("%f",&b);
		m=area_rectangle(l,b);
		printf("%.2f",m);
	}
	

	return 0;
}

float area_square(float side)
{
	printf("area is %.2f",(side*side));
}

float area_circle(float radius)
{
	float area;
	area = 3.14*radius*radius;
	printf("area is %.2f",area);
}

float area_rectangle(float l, float b)
{
	float areal;
	areal= l*b;
	printf("area is %f",areal);
}
