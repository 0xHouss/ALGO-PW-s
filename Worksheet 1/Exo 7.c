#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Give two numbers: ");
    scanf("%d %d", &a, &b);

    int c = a;
    int d = b;

    int r = 0;

    while (c > 0) {
        if (c % 2 != 0) {
            r += d;
        }

        c /= 2;
        d *= 2;
    }

    printf("%d * %d = %d\n", a, b, r);
}