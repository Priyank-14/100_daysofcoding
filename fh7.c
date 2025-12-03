/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)
Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char filename[200];
    char ch;
    printf("enter filename:");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("Error opening the file!\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
return 0;
}
