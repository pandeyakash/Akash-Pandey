//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
int num1,num2,sum;
printf("Enter number 1:-");
scanf("%d",&num1);
printf("Enter number 1:-");
scanf("%d",&num2);
sum=add(num1 ,num2);
printf("Sum of %d and %d is %d", num1, num2, sum);
return 0;
}
int add(int a, int b)
{
int c;
c=a + b;
return(c);
}
