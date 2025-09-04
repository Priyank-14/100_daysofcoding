/*Q29: Write a program to calculate the factorial of a number.
Sample Test Cases:
Input 1:
5
Output 1:
120
Input 2:
3
Output 2:
6
*/
#include<stdio.h>
int main(){
    int num,i,fact=1;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact*=i;
    }
printf("factorial of %d is:%d\n",num,fact);
return 0;
}