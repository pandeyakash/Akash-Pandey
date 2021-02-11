#include<stdio.h>
int main()
{
    print();
}
int sum(int a, int b)
{
    int sum;
    sum=a+b;
    return(sum);
}
int print()
{
    int x,y,z;
    printf("Enter the First Number=");
    scanf("%d", &x);
    printf("Enter the Second Number=");
    scanf("%d", &y);
    z=sum(x,y);
    printf("The Sum is=%d", z);
    return 0;
}
