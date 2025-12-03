/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    char ch;
    int vowels=0,consonants=0;
    printf("enter filename: ");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
        }
        if(ch>='a' && ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
}
printf("No.of vowels in file is:%d\n",vowels);
printf("No.of consonant in file is:%d\n",consonants);
return 0;
}