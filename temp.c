/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter temperature in celsius:\n");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5+32);
    printf("the temperature in celsius is:%.1f\n",celsius);
    printf("the temperature in fahrenheit is:%.1f\n",fahrenheit);
    return 0;
}