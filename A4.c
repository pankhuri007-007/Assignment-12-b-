
#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n--- CALCULATOR MENU ---\n");
        printf("1. ADD\n");
        printf("2. SUBTRACT\n");
        printf("3. MULTIPLY\n");
        printf("4. DIVIDE\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == EXIT) {
            printf("Exiting calculator...");
            break;
        }

        if (choice < ADD || choice > DIVIDE) {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case ADD:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case SUBTRACT:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case MULTIPLY:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case DIVIDE:
                if (num2 == 0) {
                    printf("Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                break;
        }

    } while (1);

    return 0;
}
