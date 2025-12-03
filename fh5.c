/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/
#include<stdio.h>
int main(){
    FILE *src,*dest;
    char ch;
    char srcname[100],destname[100];
    printf("enter source filename:\n");
    scanf("%s",srcname);
    src=fopen(srcname,"r");
    if(src==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("enter destination file name:\n");
    scanf("%s",destname);
    dest=fopen(destname,"w");
    if(dest==NULL){
        printf("Error creating/opening file!\n");
    }
    while((ch=fgetc(src))!=EOF){
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfuly to %s\n",destname);
    return 0;
}