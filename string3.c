/*Q83: Count vowels and consonants in a string.
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/
#include<stdio.h>
int main(){
    char str[100];
    int i=0,vowels=0,consonants=0;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0'){
        char ch=str[i];
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            if(ch>='A' && ch<='Z'){
                ch=ch+32;
            }
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
            i++;
        }
    printf("Vowels=%d, Consonants=%d\n",vowels,consonants);
    return 0;
    }