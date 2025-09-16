/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
Sample Test Cases:
Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.
*/
#include<stdio.h>
int main(){
     int totalBlocks = 5;
    int i, j;
    int stars;

    for(i = 1; i <= totalBlocks; i++) { 
       
        if(i <= 3) {
            stars = 2*i - 1; 
        } else {
            stars = 2*(totalBlocks - i) + 1; 
        }
        for(j = 1; j <= stars; j++) {
            printf("*\n");
        }
printf("\n"); 
    }

    return 0;
}