/*34:Write a program to check if a number is prime or not.
Sample Test Cases:
Input 1:
7
Output 1:
Prime
Input 2:
10
Output 2:
Not prime
*/
#include<stdio.h>
int main(){
    int num,i,isPrime=1;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime\n");
    }
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("Number is Prime\n");
    }
    else{
        printf("Number is not Prime\n");
    }
return 0;
}