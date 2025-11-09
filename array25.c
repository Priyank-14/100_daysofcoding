/*Q80: Multiply two matrices.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;
    printf("enter row and column for matrix A:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column for matric B:\n");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1],B[r2][c2],C[r1][c2];
    printf("enter elements for matrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter elements for matrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    if(c1!=r2){
        printf("Error!Matrix multiplication is not possible\n");
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            C[i][j]=0;
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant Matrix(A*B):\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
return 0;
}