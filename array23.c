/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/
#include<stdio.h>
int main(){
    int r,c,i,j,sum=0;
    printf("enter the number of rows and columns of matrix:\n");
    scanf("%d%d",&r,&c);
    int A[r][c];
    printf("enter elements of matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    if(r!=c){
        printf("ERROR! NOT A SQUARE MATRIX, ADDITION NOT POSSIBLE!\n");
    }
    for(i=0;i<r;i++){
        sum+=A[i][i];
    }
printf("sum of all the main diagonal elements is: %d\n",sum);
return 0;
}