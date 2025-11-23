/*Q94: Find the longest word in a sentence.
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include<stdio.h>
int main(){
    char str[200],longest[200];
    int i=0,j=0,start=0,currentlen=0,maxlen=0;
    printf("enter a sentence:\n");
    scanf("%[^\n]",str);
    while(1){
        if(str[i]!=' ' && str[i]!='\0'){
            currentlen++;
        }
        else{
            if(currentlen>maxlen){
                maxlen=currentlen;
                for(j=0;j<currentlen;j++){
                    longest[j]=str[j+start];
                }
                longest[currentlen]='\0';
            }
            currentlen=0;
            start=i+1;
        }
        if(str[i]=='\0'){
            break;
        }
        i++;
    }
    printf("Longest word is:%s\n",longest);
    return 0;
}