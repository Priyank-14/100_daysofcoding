/*Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/
#include<stdio.h>
int main(){
    char str[100],rev[100];
    int i,len=0;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[i]='\0';
    int flag=0;
    for(i=0;i<len;i++){
        if(rev[i]!=str[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("the input string is Palindrome\n");
    }
    else{
        printf("the input string is Not Palindrome\n");
    }
    return 0;
}