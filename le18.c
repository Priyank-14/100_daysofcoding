/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1
Input 2:
nums1 = [1,2,3]
Output 2:
0
Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array between 0 to %d:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr+=arr[i];
    }
    int totalsum=n*(n+1)/2;
    int missing=totalsum-sumarr;
    printf("Missing element is:%d\n",missing);
    return 0;
}