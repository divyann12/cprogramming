#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of a nd b");
    scanf("%d%d",&a,&b);
    int d;
    printf("1=addition 2=subtraction 3=multiplication 4=division");
    scanf("%d",&d);
    if(d==1)
    {
    c=a+b;
    printf("addition: %d",c);
    }
    else if(d==2)
    {
        c=a-b;
        printf("subtraction: %d",c);
    }
    else if (d==3)
    {
        c=a*b;
        printf("multiplication: %d",c);
    }
    else if (d==4)                                                               
    {
        if(b==0);
        {
        printf("infinity");
        }
    }
    else
    {
        c=a/b;
        printf("division:%d",c);
    }

}
