//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
int num1,num2,sum;
printf("Enter number 1:-");
scanf("%d",&num1);
printf("Enter number 2:-");
scanf("%d",&num2);
sum=num1+num2;
printf("Sum of %d and %d is %d", num1, num2, sum);
return 0;
}
