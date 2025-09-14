/*Q38: Write a program to find the sum of digits of a number.
Sample Test Cases:
Input 1:
123
Output 1:
6
Input 2:
999
Output 2:
27
*/
#include<stdio.h>
int main(){
    int num,sum=0,digit;
    printf("enter a number:\n");
    scanf("%d",&num);
    printf("sum of digits of %d is:",num);
    while(num>0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
printf("%d",sum);
return 0;

}