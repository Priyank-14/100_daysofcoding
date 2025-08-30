/*Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    sum = n * (n + 1) / 2;
    printf("the sum of first %d numbers is:%d\n",n,sum);
    return 0;
}