/*Q93: Check if two strings are anagrams of each other.
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams
*/
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int freq[26]={0};
    int i;
    printf("Enter string1:\n");
    scanf(" %[^\n]",str1);
    printf("Enter string2:\n");
    scanf(" %[^\n]",str2);
    for(i=0;str1[i]!='\0';i++){
        freq[str1[i]-'a']++;
    }
    for(i=0;str2[i]!='\0';i++){
        freq[str2[i]-'a']--;
    }
    for(i=0;i<26;i++){
        if(freq[i]!=0){
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}