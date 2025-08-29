/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("sum=%d\n",num1+num2);
    printf("difference=%d\n",num1-num2);
    printf("product=%d\n",num1*num2);
    float quotient=(num2!=0)?(float)num1/num2:0;
    printf("quotient=%.2f\n",quotient);
    return 0;}