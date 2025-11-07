/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include<stdio.h>
int main(){
    int n,i,k;
    printf("enter number of elements of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter by how many positions array to be rotated:\n");
    scanf("%d",&k);
    k=k%n;
    int rotated[n];
    for(int i=0;i<n;i++){
        rotated[(i+k)%n]=arr[i];
    }
    printf("Array after rotating by %d positions:\n",k);
    for(i=0;i<n;i++){
        printf("%d ",rotated[i]);
    }
return 0;
}