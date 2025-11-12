/*Q82: Print each character of a string on a new line.
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/
#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        i++;
    }
return 0;
}