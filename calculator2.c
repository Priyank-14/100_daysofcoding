/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6
Input 2:
10 3 %
Output 2:
1
Input 3:
15 5 /
Output 3:
3
*/
#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("enter two numbers and operation to perform(+,-,*,/,%)\n");
    scanf("%d%d %c",&a,&b,&op);
    switch(op){
        case '+':printf("The sum is:%d\n",a+b);break;
        case '-':printf("the difference is:%d\n",a-b);break;
        case '*':printf("the product is:%d\n",a*b);
        case '/':if(b!=0){
            printf("The quotient is:%d\n",a/b);
        }
        else{
            printf("Error:Division by 0\n");
        }
        break;
        case '%':if(b!=0){
            printf("The remainder is:%d\n",a%b);
        }
        else{
            printf("Error:Modulus by 0\n");
        }
        break;
    }
return 0;
}