/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include<stdio.h>
int main(){
    int num,firstdig,lastdig,digit=0,swapnum,temp,divisor=1,middlepart;
    printf("enter a number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digit++;
        temp/=10;
    }
    for(int i=1; i<digit;i++){
        divisor*=10;
    }
    firstdig=num/divisor;
    lastdig=num%10;
    middlepart=(num%divisor)/10;
    swapnum= (lastdig*divisor)+(middlepart*10)+firstdig;
    printf("the swapped number is:%d\n",swapnum);
    return 0;
}