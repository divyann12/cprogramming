#include<stdio.h>
void main(){
 int ch;
 printf("1. circle \n 2. square \n 3. rectangle \n enter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1:
    int r;
    float area,peri;
    printf("enter the radius");
    scanf("%d",&r);
    area=3.14*r*r;
    peri=3.14*2*r;
    printf("Area of circle:%f",area);
    printf("Perimeter of circle:%f",peri);
    break;
 }
}