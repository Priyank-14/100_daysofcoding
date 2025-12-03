/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/
#include<stdio.h>
int main(){
    FILE *in,*out;
    char ch;
    in=fopen("input.txt","r");
    if(in==NULL){
        printf("Error opening input.txt\n");
        return 1;
    }
    out=fopen("output.txt","w");
    if(out==NULL){
        printf("Error creating the output file\n");
        fclose(in);
        return 1;
    }
    while((ch=fgetc(in))!=EOF){
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        fputc(ch,out);
    }
fclose(in);
fclose(out);
printf("Conversion Completed\n");
return 0;

}