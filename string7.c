/*Q87: Count spaces, digits, and special characters in a string.
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/
#include<stdio.h>
int main(){
    char str[100];
    int space=0,digits=0,special=0;
    int len=0,i;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        if(str[i]==' '){
            space++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else if(str[i]>='A' && str[i]<='Z'|| str[i]>='a' && str[i]<='z'){

        }
        else{
            special++;
        }
    }
printf("Spaces=%d\nDigits=%d\nSpecial=%d\n",space,digits,special);
return 0;
}