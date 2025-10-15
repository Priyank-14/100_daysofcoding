/*Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
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
    printf("Original array:\n");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    for(int k=0;k<n/2;k++){
        int temp= arr[k];
        arr[k]=arr[n-k-1];
        arr[n-k-1]=temp;
     }
    printf("Reversed array:\n");
    for(int l=0;l<n;l++){
        printf("%d ",arr[l]);
    }
return 0;
}