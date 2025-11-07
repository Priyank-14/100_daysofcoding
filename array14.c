/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include<stdio.h>
int main(){
    int n,i,max=0,s_max=-1;
    printf("enter number of elements of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    for(i=0;i<n;i++){
        if(i!=max){
            if(s_max=-1||arr[s_max]>arr[i]){
                s_max=i;
            }
        }
    }
    if(s_max==-1){
        printf("no second largest element\n");
    }
    else{
        printf("second largest element is: %d\n",arr[s_max]);
    }
    return 0;
}