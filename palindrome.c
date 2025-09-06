/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not palindrome
*/
#include<stdio.h>
int main(){
    int num,original,reverse=0;
    printf("enter a number:\n");
    scanf("%d",&num);
    original=num;
     while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
     }
     if(original==reverse){
        printf("Number is a palindrome\n");
     }
     else{
        printf("Number is not palindrome\n");
     }
return 0;
}