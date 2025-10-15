/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1
Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number of entries:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
printf("Max=%d\nMin=%d\n",max,min);
return 0;
}
