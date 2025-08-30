/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main(){
    int hours,minutes,seconds;
    printf("enter time in seconds:\n");
    scanf("%d",&seconds);
    hours=seconds/3600;
    seconds=seconds%3600;
    minutes=seconds/60;
    seconds=seconds%60;
    printf("Time= %02d hours:%02d minutes:%02d seconds\n",hours,minutes,seconds);
    return 0;
}