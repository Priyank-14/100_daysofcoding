/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/
#include <stdio.h>

enum light { RED, YELLOW, GREEN };

int main() {
    enum light signal;
    int choice;

    printf("Enter signal (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &choice);

    signal = choice;

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid input!\n");
    }

    return 0;
}
