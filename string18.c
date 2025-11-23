/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include<stdio.h>
int main(){
    char name[100];
    int i,last=0;
    printf("enter your full name:\n");
    scanf("%[^\n]",name);
    printf("%c.",name[0]);
    for(i=0;name[i]!='\0';i++){
        if(name[i]==' ' && name[i+1]!='\0'){
            last=i+1;
        }
    }
    for(i=1;name[i]!='\0';i++){
        if(name[i]==' '){
            if(i+1!=last){
                printf("%c.",name[i+1]);
            }
        }
    }
    printf(" %s",&name[last]);
    return 0;
}