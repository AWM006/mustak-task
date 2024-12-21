
#include <stdio.h>
 

int main()
{
int x , y , i , e;
 printf("enter the no \n");
 scanf("%d",&x);
 
 printf("enter the no the limit you want to multiply \n");
 scanf("%d",&y);
printf("the no which is multiply is %d \nthe limit of multiply is  %d \n",x,y);
 printf("your ans is \n");

 for(i=1;i<=y; i++){
    e = x*i;
    printf("%d x %d = %d\n",x,i,e);
 }
    
}