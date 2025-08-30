/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("the original no.s are:%d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped no.s are:%d and %d\n",a,b);
    return 0;
}