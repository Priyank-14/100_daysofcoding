/*Q88: Replace spaces with hyphens in a string.
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/
#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    printf("input string is:%s\n",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]== ' '){
            str[i]='-';
        }
    }
printf("Updated string is:%s\n",str);
return 0;
}