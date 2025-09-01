/*Q23: Write a program to calculate a library fine based on late days.
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8
Input 2:
8
Output 2:
Fine ₹32
Input 3:
15
Output 3:
Fine ₹90
Input 4:
31
Output 4:
Membership Cancelled
*/
#include<stdio.h>
int main(){
    int days,fine=0;
    printf("Enter number of late days:\n");
    scanf("%d",&days);
    if(days<=0){
        printf("No Fine\n");
    }
    else if(days<=5){
        fine=days*2;
        printf("Your fine is:%d\n",fine);
    }
    else if(days<=10){
        fine=days*4;
        printf("Your fine is:%d\n",fine);
    }
    else if(days<=30){
        fine=days*6;
        printf("Your fine is:%d\n",fine);
    }
    else{
        printf("Membership Cancelled\n");
    }
return 0;
}