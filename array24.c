/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows and columns for matrix:\n");
    scanf("%d%d",&r,&c);
    int A[r][c];
    printf("enter elements of matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nDiagonal Traversal:\n");
    for(int col=0;col<c;col++){
        i=0;j=col;
        while(i<r && j>=0){
            printf("%d ",A[i][j]);
            i++;
            j--;
        }
    }
    for(int row=1;row<r;row++){
        int i=row;j=c-1;
        while(i<r && j>=0){
            printf("%d ",A[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");
    return 0;
}