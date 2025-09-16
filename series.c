/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56
Input 2:
5
Output 2:
Approximate sum: 2.22
*/
#include<stdio.h>
int main(){
    int n,i;
    float sum=0.0;
    printf("enter the nuumber of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=(float)(2*i)/(4*i-1);
    }
printf("Approximate sum is:%.1f\n",sum);
return 0;
}