/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/
#include<stdio.h>
enum operation{
    SUCCESS=1,
    FAILURE,
    TIMEOUT
};
int main(){
    enum operation Op;
    int choice;
    printf("Enter choice(1-3):");
    scanf("%d",&choice);
    Op=choice;
    switch(choice){
        case SUCCESS:printf("Operation Successful!\n");
                break;
        case FAILURE:printf("Operation Failed!\n");
                break;
        case TIMEOUT:printf("Operation Timed Out!\n");
                break;
        default:
            printf("Invalid choice!\n");
    }
return 0;

}