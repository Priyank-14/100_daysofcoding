/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
Sample Test Cases:
Input 1:
Output 1:
    5
   45
  345
 2345
12345
*/
#include<stdio.h>
int main(){
    int i,j,space;
    for(i=1;i<=5;i++){
        for(space=1;space<=5-i;space++){
            printf(" ");
        }
        for(j=6-i;j<=5;j++){
            printf("%d",j);
        }
    printf("\n");
    }
return 0;
}