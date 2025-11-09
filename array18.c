/*Q73: Find the sum of each row of a matrix and store it in an array.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include<stdio.h>
int main(){
    int r1,c1,i,j;
    printf("enter the number of rows and columns for matrix:\n");
    scanf("%d%d",&r1,&c1);
    int A[r1][c1];
    printf("enter elements of matrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int Rowsum[r1];
    printf("Matrix A:\n");
    for(i=0;i<r1;i++){
        Rowsum[i]=0;
        for(j=0;j<c1;j++){
            printf("%d\t",A[i][j]);
            Rowsum[i]+=A[i][j];
        }
        printf("\n");
    }
    printf("Row wise Sum of matrix A is:\n");
    for(i=0;i<r1;i++){
        printf("%d ",Rowsum[i]);
    }
    return 0;
}