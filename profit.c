/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%
Input 2:
1000 800
Output 2:
Loss 20%
Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include<stdio.h>
int main(){
    float cp,sp,profit,loss,percentage;
    printf("enter the cost price:\n");
    scanf("%f",&cp);
    printf("enter the selling price:\n");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        percentage=(profit/cp)*100;
        printf("the profit is:%.2f\n",profit);
        printf("the profit percentage is:%.2f%%\n",percentage);
    }
    else if(sp<cp){
        loss=cp-sp;
        percentage=(loss/cp)*100;
        printf("the loss is:%.2f\n");
        printf("the loss percentage is:%.2f%%\n",percentage);
    }
    else{
        printf("No profit, No loss!\n");
    }
return 0;
}