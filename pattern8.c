/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
Sample Test Cases:
Input 1:
Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include<stdio.h>
int main(){
    int totalRows = 5; 
    int i, j;
    int stars;

    for(i = 1; i <= totalRows; i++) { 
        stars = 2*i - 1; 
        for(j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    for(i = totalRows - 1; i >= 1; i--) { 
        stars = 2*i - 1; 
        for(j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}