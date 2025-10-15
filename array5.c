/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/
#include<stdio.h>
int main(){
    int n,pos=0,neg=0,zero=0;
    printf("enter number of entries:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>0){
            pos+=1;
        }
        else if(arr[j]<0){
            neg+=1;
        }
        else if(arr[j]==0){
            zero+=1;
        }
    }
printf("Positive entries: %d\nNegative entries: %d\nZero entries: %d\n",pos,neg,zero);
return 0;
}