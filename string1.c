/*Q81: Count characters in a string without using built-in length functions.
Sample Test Cases:
Input 1:
Hello
Output 1:
5
Input 2:
Output 2:
1
*/
#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("enter string:\n");
    scanf("%[^\n]",str);
    while(str[count]!='\0'){
        count++;
    }
    printf("the string %s has %d characters\n",str,count);
    return 0;
}