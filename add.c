#include<stdio.h>
void main(){
    float a,b,m;
    printf("enter the numbers");
    scanf("%f%f",&a,&b);
    m= a+b;
    printf("addition=%f\n",m);
    m= a-b;
    printf("difference=%f\n",m);
    m= a/b;
    printf("quotient=%f\n",m);
    m= a*b;
    printf("product=%f\n",m);
}