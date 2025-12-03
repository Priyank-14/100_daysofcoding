/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    int count=0,num,sum=0;
    printf("Enter filename:\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    while(fscanf(fp,"%d",&num)==1){
        sum+=num;
        count++;
    }
    printf("Sum= %d\n",sum);
    printf("Average %.2f\n",(float)sum/count);
    return 0;
}