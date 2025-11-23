/*Q100: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,j,k;
    int len=0;
    printf("enter a string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            for(k=i;k<=j;k++){
                printf("%c",str[k]);
            }
            if(!(i==len-1 && j==len-1)){
                printf(",");
            }
        }
    }
return 0;
}