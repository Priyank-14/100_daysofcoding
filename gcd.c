/*Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
6
Input 2:
7 9
Output 2:
1
*/
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("the gcd of %d and %d is:",num1,num2);
    while(num2!=0){
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
printf("%d",num1);
return 0;

    }