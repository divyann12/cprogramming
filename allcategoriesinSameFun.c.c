#include<stdio.h>
void main(){
    int add(int,int);
    int sub();
    void mul(int,int);
    void div()
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d",c);
    mul(a,b);
    div();
}
int add(int x,int y)
{
    int z=x+y;
    return z;    
}
int sub()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    int z=x-y;
    return z;
}
void mul
