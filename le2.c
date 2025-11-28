/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1
Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0
Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2
*/
#include<stdio.h>
int main(){
    int n,i,key,index=-1;
    printf("enter number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in sorted order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number key to find its ceil in array:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]>=key){
            index=i;
            break;
        }
    }
    printf("The index of ceil of %d in the array is %d\n",key,index);
    return 0;
}