/*Q37: Write a program to find the LCM of two numbers.
Sample Test Cases:
Input 1:
4 5
Output 1:
20
Input 2:
7 3
Output 2:
21
*/
#include<stdio.h>
int main(){
int num1,num2,lcm;
printf("enter two numbers:\n");
scanf("%d%d",&num1,&num2);
lcm=(num1>num2)?num1:num2;
printf("the lcm of %d and %d is:",num1,num2);
while(1){
    if(lcm%num1==0 && lcm%num2==0){
        break;
    }
    lcm++;
}
printf("%d\n",lcm);
return 0;
}