#include<stdio.h>
int main(){
    int number,sum=0,digit;
    printf("enter the number:");
    scanf("%d",&number);
    while (number!=0)
    {
        digit=number%10;
        sum+=digit;
        number/=10;
        printf("no. of digits:%d\n",sum);
        return 0;
    }
    
}
