#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Give three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    while (a < b || b < c) {
        if (a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }

        if (b < c) {
            int tmp = b;
            b = c;
            c = tmp;
        }
    }

    printf("%d %d %d\n", a, b, c);
}

int main() {
    int a;
    int b;
    int c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            if (b > c) {
                printf("Order: %d %d %d\n", a, b, c);
            } else {
                printf("Order: %d %d %d\n", a, c, b);
            }
        } else {
            printf("Order: %d %d %d\n", c, a, b);
        }
    } else {
        if (b > c) {
            if (a > c) {
                printf("Order: %d %d %d\n", b, a, c);
            } else {
                printf("Order: %d %d %d\n", b, c, a);
            }
        } else {
            printf("Order: %d %d %d\n", c, b, a);
        }
    }
}