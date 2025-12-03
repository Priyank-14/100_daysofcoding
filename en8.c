/*Q138: Print all enum names and integer values using a loop.
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/
#include<stdio.h>
enum Colors{
    RED=0,
    YELLOW,
    GREEN,
};
int main(){
    enum Colors cl;
    char *name[]={"RED","YELLOW","GREEN"};
    for(cl=RED;cl<=GREEN;cl++){
        printf("%s=%d\n",name[cl],cl);
    }
return 0;
}