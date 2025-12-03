/*Q145: Return a structure containing top student's details from a function.
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    return s[top];   // return the whole structure
}

int main() {
    struct Student s[50], topStudent;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    topStudent = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}
