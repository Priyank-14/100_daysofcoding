/*Q142: Store details of 5 students in an array of structures and print all.
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll, marks for student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nList of Students:\n");
    printf("Name\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
