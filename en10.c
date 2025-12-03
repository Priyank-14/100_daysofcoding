/*Q140: Define a struct with enum Gender and print person's gender.
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/
#include <stdio.h>

enum Gender { MALE = 1, FEMALE, OTHER };

struct Person {
    enum Gender g;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter gender (1=MALE, 2=FEMALE, 3=OTHER): ");
    scanf("%d", &choice);

    p.g = choice;

    switch (p.g) {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;

        default:
            printf("Invalid gender!\n");
    }

    return 0;
}
