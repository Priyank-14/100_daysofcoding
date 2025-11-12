/*Q85: Reverse a string.
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include<stdio.h>
int main(){
    char str[100];
    int i, len=0;
    printf("Enter a string:\n");
    scanf("%[^\n]",str);
    while(str[len]!='\0'){
        len++;
    }
    i=len-1;
    printf("reversed string is:\n");
    while(i>=0){
        printf("%c",str[i]);
        i--;
    }
return 0;
    
}