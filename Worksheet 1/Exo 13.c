/*
Algorithm Fibonacci;
Vars n, u1, u2, un: integers;
Begin
    repeat {
        write("Give a number: ");
        read(n);

        if (n <= 2) write("Must be > 2");
    } until (n > 2)

    u1 = 1;
    u2 = 1;

    for i from 3 to n {
        un = u1 + u2;
        u1 = u2;
        u2 = un;
    }

    write("U(", n, ") = ", un);
End.
*/

#include <stdio.h>

int fib(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;

    return fib(n-1) + fib(n-2);
}

int U(int n) {
    int a = 1;
    int b = 1;
    int c;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n;

    printf("Give a number: ");
    scanf("%d", &n);

    printf("The %d-th element of the Fibonacci sequence normally: %d\n", n, U(n));
    printf("The %d-th element of the Fibonacci sequence recursively: %d\n", n, fib(n));
}