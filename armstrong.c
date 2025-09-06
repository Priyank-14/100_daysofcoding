/*Q33.Write a program to check if given number is Armstrong or not.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,original,digits=0,sum=0;
    printf("enter a number:\n");
    scanf("%d",&num);
    original=num;
    int temp=num;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=num;
    while(temp>0){
        int digit=temp%10;
        sum +=(int)(pow(digit,digits)+0.5);
        temp/=10;
    }
    if(sum==original){
        printf("Number is Armstrong number\n");
    }
    else{
        printf("Number is not an Armstrong number\n");
    }
return 0;
}