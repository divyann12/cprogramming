#include<stdio.h>
void main(){
    int a,b,c,d;
    int big;
    printf("enter the values:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
    printf("the biggest number is :%d",big);
}