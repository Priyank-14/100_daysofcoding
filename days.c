/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
Sample Test Cases:
Input 1:
1
Output 1:
Monday
Input 2:
5
Output 2:
Friday
*/
#include<stdio.h>
int main(){
    int day;
    printf("enter a number (1-7)\n");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday\n");break;
        case 2:printf("tuesday\n");break;
        case 3:printf("wednesday\n"); break;
        case 4:printf("thursday\n"); break;
        case 5:printf("friday\n"); break;
        case 6:printf("saturday\n"); break;
        case 7:printf("sunday\n"); break;
        default:printf("Invalid input! enter a number between(1-7)\n");
    }
return 0;
}