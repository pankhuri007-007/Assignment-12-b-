
#include <stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct TaggedUnion {
    enum Type tag;
    union Data data;
};

void printValue(struct TaggedUnion value) {
    switch (value.tag) {
        case INT_VALUE:
            printf("Integer value: %d", value.data.i);
            break;

        case FLOAT_VALUE:
            printf("Float value: %.2f", value.data.f);
            break;

        case CHAR_VALUE:
            printf("Character value: %c", value.data.c);
            break;

        default:
            printf("Invalid type!");
    }
}

int main() {
    struct TaggedUnion value;

    int choice;

    printf("Choose type:\n");
    printf("0. Integer\n1. Float\n2. Character\n");
    scanf("%d", &choice);

    value.tag = choice;

    switch (value.tag) {
        case INT_VALUE:
            printf("Enter integer: ");
            scanf("%d", &value.data.i);
            break;

        case FLOAT_VALUE:
            printf("Enter float: ");
            scanf("%f", &value.data.f);
            break;

        case CHAR_VALUE:
            printf("Enter character: ");
            scanf(" %c", &value.data.c);
            break;

        default:
            printf("Invalid choice!");
            return 0;
    }

    printValue(value);

    return 0;
}
