/*Q75: Add two matrices.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j;
    printf("enter rows and columns for matrix A:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and columns for matrix B:\n");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2|| c1!=c2){
        printf("Matrix addition not possible:\n");
    }
    int A[r1][c1],B[r2][c2],C[r1][c1];
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
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Resultant Matrix(A+B):\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
   return 0; 
    
}