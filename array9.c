/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include<stdio.h>
int main(){
    long num;
    int freq[10]={0}, digit,maxcount=0,maxdigit=0;
    printf("Enter the number:\n");
    scanf("%ld",&num);
    while(num>0){
        digit=num%10;
        num/=10;
        freq[digit]++;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>maxcount){
        maxcount=freq[i];
        maxdigit=i;
    }
}
    for(int i=0;i<10;i++){
        if(freq[i]==maxcount){
            printf("%d ",i);
        }
    }
    return 0;
}