/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include<stdio.h>
int main(){
    char str[100];
    char key;
    int i,count=0;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    printf("enter character whose frequency is required:\n");
    scanf(" %c",&key);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==key){
            count++;
        }
    }
    printf("Frequency of %c is %d\n",key,count);
    return 0;

}