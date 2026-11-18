
#include <stdio.h>

// Ordinary structure
struct Ordinary {
    unsigned int read;
    unsigned int write;
    unsigned int execute;
    unsigned int admin;
};

// Structure using bit-fields
struct BitField {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {

    struct Ordinary o;
    struct BitField b;

    o.read = 1;
    o.write = 1;
    o.execute = 0;
    o.admin = 1;

    b.read = 1;
    b.write = 1;
    b.execute = 0;
    b.admin = 1;

    printf("--- Ordinary Structure ---\n");
    printf("Read: %u\n", o.read);
    printf("Write: %u\n", o.write);
    printf("Execute: %u\n", o.execute);
    printf("Admin: %u\n", o.admin);

    printf("\nSize of Ordinary Structure: %zu bytes\n", sizeof(o));

    printf("\n--- Bit-field Structure ---\n");
    printf("Read: %u\n", b.read);
    printf("Write: %u\n", b.write);
    printf("Execute: %u\n", b.execute);
    printf("Admin: %u\n", b.admin);

    printf("\nSize of Bit-field Structure: %zu bytes\n", sizeof(b));

    return 0;
}
