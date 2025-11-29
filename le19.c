/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3
Input 2:
nums1 = [1,2,2]
Output 2:
2
Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[100]={0};
    for(int i=0;i<n;i++){
        if(visited[arr[i]]==1){
            printf("Repeated element is: %d\n",arr[i]);
            return 0;
        }
        visited[arr[i]]=1;
    }
    printf("No repitation found!\n");
return 0;
}