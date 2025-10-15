/*Q57: Find the sum of array elements.
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20
Input 2:
3
1 1 1
Output 2:
3
*/
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter value for number of entries:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
printf("Sum of elements of array is: %d\n",sum);
return 0;
}