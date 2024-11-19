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