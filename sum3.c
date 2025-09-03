/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9
Input 2:
5
Output 2:
25
*/
#include<stdio.h>
int main(){
    int n,i,sum=0,odd=1;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum+=odd;
        odd+=2;
        }
 printf("Sum of first %d odd numbers is:%d\n",n,sum);
return 0;

}