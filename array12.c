/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include<stdio.h>
int main(){
    int n,i,num,pos;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the elements of the array in sorted way:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to be entered and its position:\n");
    scanf("%d%d",&num,&pos);
    for(i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    n++;
    printf("Array after insertion of element\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
 }
