/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
Input 2:
nums = [1,2,3]
Output 2:
-1
Input 3:
nums = [2,1,-1]
Output 3:
0
*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int totalsum=0,leftsum=0,pivot=-1;
    for(i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(i=0;i<n;i++){
        int rightsum=totalsum-leftsum-arr[i];
        if(rightsum==leftsum){
            pivot=i;
            break;
        }
        leftsum+=arr[i];
    }
printf("Pivot element index is: %d",pivot);
return 0;
}