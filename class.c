#include<stdio.h>
int fact1(int);
void main()
{
    int a,fact;
    printf("\n enter the number to calculate factorial");
    scanf("%d",&a);0
    fact=fact1(a);
    printf("factorial of %d is:%d",a,fact1);
}
void fact1(int x)
{
    if(x<=0)
    return 1;
    else
    return x*fact1(x-1);
}