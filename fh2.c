/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char name[100];
    int age;
    fp=fopen("info.txt","w");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 0;
    }
    printf("enter your name:\n");
    scanf("%s",name);
    printf("enter your age:\n");
    scanf("%d",&age);
    fprintf(fp,"Name:%s\tAge:%d\n",name,age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}