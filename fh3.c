/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char line[100];
    fp=fopen("info.txt","r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 0;
    }
    while(fgets(line,sizeof(line),fp)!=NULL){
        printf("%s",line);
    }
    return 0;
}