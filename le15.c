/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[100],t[100];
    printf("enter string s in lowercase:\n");
    scanf("%s",s);
    printf("Enter string t in lowercase:\n");
    scanf("%s",t);
    int n1=strlen(s);
    int n2=strlen(t);
    if(n1!=n2){
        printf("Not anagram!\n");
        return 0;
    }
    int freq[26]={0};
    for(int i=0;i<n1;i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        freq[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            printf("Not Anagram\n");
             return 0;
        }
       
    }
    printf("Anagram!\n");
    return 0;
}