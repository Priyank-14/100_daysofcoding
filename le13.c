/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5
Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
*/
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter which smallest you want:\n");
    scanf("%d",&k);
    for(i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
printf("%dth smallest element is %d\n",k,arr[k-1]);
return 0;
}