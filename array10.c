/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include<stdio.h>
int main(){
    int n,i,key;
    int low,high,mid;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array in sorted order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    int found=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
          found=mid;
          break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
   if(found != -1){
    printf("element %d found at index %d\n",key,found);
   } 
   else{
    printf("Element not found\n");
   }
return 0;
}