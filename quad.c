/*Q17: Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1
Input 2:
1 -2 1
Output 2:
Roots are real and same: 1
Input 3:
1 2 5
Output 3:
Roots are complex
*/
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2,realpart,imgpart;
    printf("enter the coefficients:a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0){
        root1=(-b+(discriminant))/2*a;
        root2=(-b-(discriminant))/2*a;
        printf("the roots are real and distinct\n");
        printf("root1=%.2f and root2=%.2f\n",root1,root2);
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal\n");
        printf("root1=root2=%.2f\n",root1);
    }
    else{
        
        printf("roots are complex and imginary\n");
     
    }

return 0;

}