/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Sample Test Cases:
Input 1:
n = 8
Output 1:
6
Input 2:
n = 1
Output 2:
1
Input 3:
n = 4
Output 3:
-1
*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter positive integer n:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        arr[i]=i+1;
    }
    int totalsum=0,leftsum=0,pivot=-1;
    for(i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(i=0;i<n;i++){
        int rightsum=totalsum-leftsum-arr[i];
        if(rightsum==leftsum){
            pivot=arr[i];
            break;
        }
        leftsum+=arr[i];
    }
printf("The pivot element between 1 and %d is %d",n,pivot);
return 0;
}