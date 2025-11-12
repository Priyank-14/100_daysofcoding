/*Q84: Convert a lowercase string to uppercase without using built-in functions.
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/
#include<stdio.h>
int main(){
    char str[50];
    int i=0;
    printf("enter a string in lowercase:\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("String in uppercase is:%s\n",str);
    return 0;
}