/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False
Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/
#include<stdio.h>
int main(){
    int r,c;
    printf("enter row and column for the matrix:\n");
    scanf("%d%d",&r,&c);
    int A[r][c];
    printf("enter elements for matrix A:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<r && i<c;i++){
        for(int j=i+1;j<r && j<c;j++){
            if(A[i][i]==A[j][j]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        break;
    }
}
    if(flag){
        printf("True!Diagonal elements are unique:\n");
    }
    else{
        printf("False!,Diagonals elements are not unique\n");
    }
return 0;
}
