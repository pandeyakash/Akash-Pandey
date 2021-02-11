#include <stdio.h>

int main()
{
    float a,h,d,b;
    printf("Enter the h:-");
    scanf("%f", &h);
    printf("Enter the d:-");
    scanf("%f", &d);
    printf("Enter the b:-");
    scanf("%f", &b);
    a=0.33*((h*d*b)+(b/d));
    printf("Volume of tromboloid:-%f", a);
    return 0;
}
