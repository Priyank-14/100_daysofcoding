/*Q56: Read and print elements of a one-dimensional array.
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30
Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter value for number of entries:\n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    printf("Integers are:\n");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
return 0;
}