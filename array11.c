/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include<stdio.h>
int main(){
    int n,num,pos,i;
    printf("enter number of elements for the array\n");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter elements of array in sorted arrangement\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to insert:\n");
    scanf("%d",&num);
    pos=n;
    for(i=0;i<n;i++){
        if(arr[i]>num){
            pos=i;
            break;
        }
    }
    for(i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}