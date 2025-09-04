/*Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321
Input 2:
100
Output 2:
1
*/
#include<stdio.h>
int main(){
    int num,rev=0,remainder,orig;
    printf("enter a number:\n");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;
    }
printf("the origiinal number is:%d\n",orig);
printf("the reversed number is:%d\n",rev);
return 0;

}