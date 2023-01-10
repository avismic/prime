//creating a 2d array to store the tables of 2 different numbers

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the value of first number: ");
	scanf("%d",&a);
	printf("Enter the value of second number: ");
	scanf("%d",&b);
	int arr[2][10];
	for(int i=1;i<11;i++){
		int m=a*i;
		arr[1][i]=m;
		int n=b*i;
		arr[2][i]=n;
	}
	printf("%d",arr[1][1]);
	return 0;
}
