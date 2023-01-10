//program to reverse a sentence using recursion 
#include<stdio.h>
void reverse();
void main()
{
	printf("Please enter a sentence: ");
	reverse();
}

void reverse()

{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		reverse();
		printf("%c",c);
	}
} 



//#include <stdio.h>

/*int main(void) {
  int num, reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num != 0) {
    int last_digit = num % 10;  // extract the last digit
    reversed = reversed * 10 + last_digit;  // shift reversed one place to the left and add the last digit
    num /= 10;  // remove the last digit from num
  }

  printf("Reversed number: %d\n", reversed);

  return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    while(i<n);
    {
        printf("the series is: %d",i*2);
        i=i+1;
    }
    return 0;
}
*/