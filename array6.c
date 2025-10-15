/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2
Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include<stdio.h>
int main(){
    int n,num;
    printf("enter number of entries:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value to search:\n");
    scanf("%d",&num);
    for(int j=0;j<n;j++){
        if(arr[j]==num){
            printf("Element %d found at index %d",num,j);
        }
    }
return 0;
}