
#include <stdio.h>

int main(){
    int a , b, c, d ,e , f , g;
    printf("enter yout salary \n");
    scanf("%d",&a);

    c = a/100*15;
    d = a/100*10;
    e = a/100*8;
    f = a/100*5;

    if(a>10000){
    b = a/100*38;
    g = a+b;
    printf("your tax is    %d \n",f);
    }
    else{
        b = a/100*33;
        g = a +b;
    }
    printf("your DA is     %d \n",c);
    printf("your HRA is    %d \n",d);
    printf("your TA is     %d \n",e);
    printf("your total salary is \n %d",g);
}