/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include<stdio.h>
int main(){
    int n,pos,i;
    printf("enter number of elements of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position of element to be deleted:\n");
    scanf("%d",&pos);
    if(pos<0 || pos>=n){
        printf("Invalid position\n");
    }
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deletion is:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}