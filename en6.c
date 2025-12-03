/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>

enum menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum menu choice;
    int a, b;

    printf("1 = ADD\n2 = SUBTRACT\n3 = MULTIPLY\n");
    printf("Enter choice and two numbers (e.g., 1 10 20): ");
    scanf("%d %d %d", &choice, &a, &b);

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;

        case SUBTRACT:
            printf("%d\n", a - b);
            break;

        case MULTIPLY:
            printf("%d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
