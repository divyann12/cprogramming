#include<stdio.h>
void main(){
    float a,b,c;
    printf("two numbers");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("sum=%f\n",c);
    c=a-b;
    printf("difference=%f\n",c);
    c=a*b;
    printf("product=%f\n",c);
    c=a/b;
    printf("remainder=%f\n",c);
}