
#include <stdio.h>

struct Permission {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {
    struct Permission p;
    unsigned int r, w, e, a;

    printf("Enter read permission (0 or 1): ");
    scanf("%u", &r);

    printf("Enter write permission (0 or 1): ");
    scanf("%u", &w);

    printf("Enter execute permission (0 or 1): ");
    scanf("%u", &e);

    printf("Enter admin permission (0 or 1): ");
    scanf("%u", &a);

    if (r > 1 || w > 1 || e > 1 || a > 1) {
        printf("Invalid input!");
        return 0;
    }

    p.read = r;
    p.write = w;
    p.execute = e;
    p.admin = a;

    printf("\nPermissions: ");

    printf("%c", p.read ? 'r' : '-');
    printf("%c", p.write ? 'w' : '-');
    printf("%c", p.execute ? 'x' : '-');
    printf("%c", p.admin ? 'A' : '-');

    return 0;
}
