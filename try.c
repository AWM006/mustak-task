
#include <stdio.h>

int main(){
    float b_s , b_a ,h_r_a , t_a , t_s  , a_s ;
    float tax;
    printf("enter the salary");
    scanf("%f",&b_s);
    b_a=b_s*0.15;
    h_r_a=b_s*0.10;
    t_a=b_s*0.08;
    t_s=b_s + b_a + h_r_a + t_a;
    if (t_s>=10000)
    {
        tax = b_s*0.05;
        a_s = t_s - tax;
    }
    else{
        a_s =t_s;
    }
    printf("%f is actual salary",a_s);
}