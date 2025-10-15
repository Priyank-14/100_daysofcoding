/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include<stdio.h>
int main(){
    int n,neven=0,nodd=0;
    printf("enter value for number of entries:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            neven+=1;
        }
        else if(arr[j]%2!=0){
            nodd+=1;
        }
    }
printf("No of even entries: %d\nNo of odd entries: %d\n",neven,nodd);
return 0;
}