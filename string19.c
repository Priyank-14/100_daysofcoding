/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/
#include<stdio.h>
int main(){
    int dd,mm,yyyy;
    char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("enter date in dd/mm/yyyy format:\n");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    if(mm>=1 && mm<=12){
        printf("%d-%s-%d",dd,months[mm-1],yyyy);
    }
    else{
        printf("Invalid month!\n");
    }
    return 0;
}