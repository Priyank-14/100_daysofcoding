/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
#include<stdio.h>
int main(){
    int r1,c1,i,j;
    int sum=0;
    printf("enter number of rows and columns of matrix:\n");
    scanf("%d%d",&r1,&c1);
    int A[r1][c1];
    printf("enter elements of matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(int i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",A[i][j]);
            sum+=A[i][j];
        }
        printf("\n");
    }
    printf("sum of elements of above matrix A is : %d\n",sum);
    return 0;
}