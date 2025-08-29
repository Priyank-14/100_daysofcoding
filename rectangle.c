/*: Write a program to calculate the area and perimeter of a rectangle given its length and breadth*/
#include<stdio.h>
int main(){
    int length,breadth;
    printf("enter length of the rectangle:\n");
    printf("enter width of the reactangle:\n");
    scanf("%d%d",&length,&breadth);
    printf("the area of rectangle is:%d sq units\n",length*breadth);
    printf("the perimeter of the rectangle is:%d units\n", 2*(length+breadth));
}