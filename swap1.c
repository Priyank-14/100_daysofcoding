/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping:%d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Numbers after swapping:%d %d\n",a,b);
    return 0;
}