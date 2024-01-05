#include<stdio.h>  
#include<math.h>
void main(){
  int start,end,number,originalNumber,remainder,result,n;
  printf("enter the starting number:");
  scanf("%d",&start);
  printf("enter the ending number:");
  scanf("%d",&end);
  printf("armstrong numbers between %d and %d are:",start,end);
  for(number=start; number<= end; ++number){
    originalNumber=number;
    n=0;
    result=0;
    while (originalNumber!=0){
      originalNumber/=10;
      ++n;
    }
    originalNumber=number;
    while(originalNumber!=0){
      remainder=originalNumber%10;
      result+=pow(remainder,n);
      originalNumber /=10;
    }
    if(result==number){
      printf("%d",number);
    }
  }
  printf("\n");
  return 0;
}