/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows and columns for matrix:\n");
    scanf("%d%d",&r,&c);
      if (r != c) {
        printf("False! Matrix A is not symmetric (not square)\n");
        return 0;
    }
    int A[r][c],B[c][r];
    printf("enter elements for matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            B[j][i]=A[i][j];
        }
    }
     for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (A[i][j] != B[i][j]) {
                printf("False! Matrix A is not symmetric\n");
                return 0;  
            }
        }
    }

    printf("True! Matrix A is symmetric\n");
    return 0;
}