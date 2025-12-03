/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/
#include<stdio.h>
enum userroles{
    ADMIN=1,
    USER,
    GUEST,
};
int main(){
    enum userroles ur;
    int choice;
    printf("enter choice(1-3):\n");
    scanf("%d",&choice);
    ur=choice;
    switch(ur){
        case ADMIN:
        printf("Welcome Admin!\n");
        break;

        case USER:
        printf("Welcome User!\n");
        break;

        case GUEST:
        printf("Welcome Guest!\n");
        break;

        default:
        printf("Invalid choice!\n");
    }
return 0;
}