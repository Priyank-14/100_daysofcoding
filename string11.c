/*Q91: Remove all vowels from a string.
Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/
#include<stdio.h>
int main(){
    char str[100],result[100];
    int j=0;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a'&& str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("String without vowels is: %s\n",result);
    return 0;
}
