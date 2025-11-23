/*Q92: Find the first repeating lowercase alphabet in a string.
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include<stdio.h>
int main(){
    char str[100];
    int freq[26]={0};
    int i;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++){
        int index=str[i]-'a';
        freq[index]++;
    if(freq[index]==2){
        printf("First repeating character is:%c",str[i]);
        return 0;
    }
}
printf("No repeating characters\n");
return 0;
}
