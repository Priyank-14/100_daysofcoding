/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include<stdio.h>
int main(){
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num>0){
        if(num%2==0){
            printf("the number is even\n");
        }
        else{
            printf("the number is odd\n");
        }
    }
    else{
        printf("enter a number greater than 0\n");

    }
    }
