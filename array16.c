/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/
#include<stdio.h>
int main(){
    int r1,c1,i,j;
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
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
return 0;
}