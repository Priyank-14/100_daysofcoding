/*Q139: Show that enums store integers by printing assigned values.
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/
#include<stdio.h>
enum operations{
    SUCCESS=0,
    FAILURE,
    TIMEOUT,
};
int main(){
    enum operations OP;
    char *opr[]={"SUCCESS","FAILURE","TIMEOUT"};
    for(OP=SUCCESS;OP<=TIMEOUT;OP++){
        printf("%s=%d, ",opr[OP],OP);
    }
return 0;
}