/*Q90: Toggle case of each character in a string.
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/
#include<stdio.h>
int main(){
    char str[100];
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else{
            str[i]=str[i]-32;
        }
    }
    printf("string after toggle case is:%s",str);
    return 0;
}
