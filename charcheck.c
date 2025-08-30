/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1:
a
Output 1:
Vowel
Input 2:
b
Output 2:
Consonant
*/
#include<stdio.h>
int main(){
    char chr;
    printf("enter a character:\n");
    scanf("%c",&chr);
    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
       chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
        printf("the character is a vowel\n");

    }
    else{
        printf("The character is a consonant\n");
    }
    return 0;
}