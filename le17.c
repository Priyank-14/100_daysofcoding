/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15
Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17
Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/
#include<stdio.h>
int main(){
    int m,n;
    printf("enter size of first array:\n");
    scanf("%d",&m);
    printf("enter the size of second array:\n");
    scanf("%d",&n);
    int arr1[m],arr2[n];
    printf("enter elements of first array in sorted order:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elements of second array in sorted order:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            merged[k]=arr1[i];
            k++;
            i++;
        }
        else{
            merged[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){
        merged[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        merged[k]=arr2[j];
        k++;
        j++;
    }
printf("Merged sorted array is:\n");
for(int x=0;x<m+n;x++){
    printf("%d,", merged[x]);
}
return 0;
}