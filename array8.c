/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include<stdio.h>
int main(){
int n1,n2,i;
printf("Enter size of first array\n");
scanf("%d",&n1);
int arr1[n1];
printf("enter element of first array\n");
for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
printf("Enter size of second array\n");
scanf("%d",&n2);
int arr2[n2];
printf("enter elements of second array\n");
for(i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
}
int merged[n1+n2];
for(i=0;i<n1;i++){
    merged[i]=arr1[i];
}
for(i=0;i<n2;i++){
    merged[n1+i]=arr2[i];
}
printf("Elements of merged arrays are:\n");
for(i=0;i<n1+n2;i++){
    printf("%d ",merged[i]);
}
return 0;
}

