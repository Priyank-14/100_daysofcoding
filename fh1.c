/*Q120: Write a program to take a string input. Change it to sentence case.
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.
Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/
#include<stdio.h>
int main(){
    char str[200];
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    int cap=1;
    for(int i=0;str[i]!='\0';i++){
        if(cap==1 && str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
            cap=0;
        }
        else if(str[i]==' '){
            cap=1;
        }
        else{
            cap=0;
        }
    }
    printf("%s",str);
    return 0;
}