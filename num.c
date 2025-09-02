/*Q26: Write a program to print numbers from 1 to n.
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5
Input 2:
3
Output 2:
1 2 3
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a value for n:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d",i);
        if(i<n){
            printf(" ");
        }
    }
    printf("\n");
return 0;
}