#include<stdio.h>
#include<math.h>
void main(){
    float x1,x2,y1,y2,d;
    printf("enter the dimensions of two points");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance betwwen the two point is:%2f\n",d);
}