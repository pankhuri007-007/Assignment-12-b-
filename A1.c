
#include <stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int num;

    printf("Enter a number (1-7): ");
    scanf("%d", &num);

    switch (num) {
        case MONDAY:
            printf("Monday");
            break;

        case TUESDAY:
            printf("Tuesday");
            break;

        case WEDNESDAY:
            printf("Wednesday");
            break;

        case THURSDAY:
            printf("Thursday");
            break;

        case FRIDAY:
            printf("Friday");
            break;

        case SATURDAY:
            printf("Saturday");
            break;

        case SUNDAY:
            printf("Sunday");
            break;

        default:
            printf("Invalid input! Enter a number between 1 and 7.");
    }

    return 0;
}
