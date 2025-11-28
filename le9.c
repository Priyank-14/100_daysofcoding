/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39
Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
*/
#include<stdio.h>
int main(){
    int n,k,i;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter value of k(size of subarray):\n");
    scanf("%d",&k);
    if(k>n||k<0){
        printf("Invalid Input!");
    }
    int currentsum=0;
    for(i=0;i<k;i++){
        currentsum+=arr[i];
    }
    int maxsum=currentsum;
    for(i=k;i<n;i++){
        currentsum=currentsum-arr[i-k]+arr[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
    }
printf("%d",maxsum);
return 0;
}