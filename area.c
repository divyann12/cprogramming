#include<stdio.h>
void main(){
    float r;
    printf("enter the radius");
    scanf("%f",&r);
    float area1,peri1;
    area1=3.14*r*r;
    peri1=2*3.14*r;
    printf("area of circle=%2f\n",area1);
    printf("perimeter of circle=%2f\n",peri1);
    float l,b;
    printf("enter the length and breadth");
    scanf("%f%f",&l,&b);
    float area2,peri2;
    area2=l*b;
    peri2=2*(l+b);
    printf("area of rectangle=%2f\n",area2);
    printf("perimeter of rectangle=%2f\n",peri2);
    float a;
    printf("enter the side");
    scanf("%f",&a);
    float area3,peri3;
    area3=a*a;
    peri3=4*a;
    printf("area of square=%2f\n",area3);
    printf("perimeter of square=%2f",peri3);
}

