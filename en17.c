/*Q147: Store employee data in a binary file using fwrite() and read using fread().
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter name, ID, salary:\n");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}
