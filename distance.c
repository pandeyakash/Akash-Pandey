#include<stdio.h>
#include<math.h>
float input();
float calc(float,float,float,float);
float main()
{
    input();
    return 0;
}
float calc(float x1, float y1, float x2, float y2)
{
    float d;
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return(d);
}
float input()
{
    float x1,y1,x2,y2,distance;
    printf("Enter the x-coordinate for 1st point=");
    scanf("%f", &x1);
    printf("Enter the y-coordinate for 1st point=");
    scanf("%f", &y1);
    printf("Entee the x-coordinate for 2nd point=");
    scanf("%f", &x2);
    printf("Enter the y-coordinate for 2nd point=");
    scanf("%f", &y2);
    distance=calc(x1,y1,x2,y2);
    printf("The Distance is=%f", distance);
    return 0;
}
