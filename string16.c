/*Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include<stdio.h>
int main(){
    char str[100],temp;
    int i=0,start=0,end;
    printf("enter a sentence:\n");
    scanf(" %[^\n]",str);
    while(str[i]!='\0'){
        if(str[i]==' '|| str[i+1]=='\0'){
            if(str[i]==' '){
                end=i-1;
            }
            else{
                end=i;
            }
        
        while(start<end){
            temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
        start=i+1;
    }
    i++;
}
printf("Reversed sentence: %s\n",str);
return 0;
}