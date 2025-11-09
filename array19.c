/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows and columns for matrix:\n");
    scanf("%d%d",&r,&c);
    int A[r][c], B[c][r];
    printf("enter elements for matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",A[i][j]);
            B[j][i]=A[i][j];
        }
        printf("\n");
    }
    printf("Transpose of Matrix A:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",B[j][i]);
        }
        printf("\n");
    }
    return 0;
}