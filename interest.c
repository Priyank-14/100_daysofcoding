/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include<stdio.h>
#include<math.h>
int main(){
    float s_int,c_int;
    float principle,rate,time;
    printf("enter the principle:\n");
    scanf("%f",&principle);
    printf("enter the rate in %%\n");
    scanf("%f",&rate);
    printf("enter time in years:\n");
    scanf("%f",&time);
    s_int=(principle*rate*time)/100;
    c_int=principle*pow((1+rate/100),time)-principle;
    printf("the simple interest is:%.2f\n",s_int);
    printf("the compound interest is:%.2f\n",c_int);
    return 0;

    
}