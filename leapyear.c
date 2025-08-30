/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year
Input 2:
1900
Output 2:
Not a leap year
Input 3:
2000
Output 3:
Leap year
*/
#include<stdio.h>
int main(){
    int year;
    printf("enter your year:\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("the year %d is a leap year\n",year);
    }
    else if(year%100==0){
        printf("the year %d is not a leap year",year);
    }
    else if(year%4==0){
        printf("the year %d is a leap year",year);
    }
    else{
        printf("the year %d is not a leap year\n",year);
    }
   return 0; 
}