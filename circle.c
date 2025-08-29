/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
int main(){
    float radius;
    printf("enter radius for the circle:\n");
    scanf("%f",&radius);
    printf("the area of the circle is:%.2f sq.units\n",3.14*radius*radius);
    printf("the circumference of the circle is:%.2f units\n",2*3.14*radius);
    return 0;
}