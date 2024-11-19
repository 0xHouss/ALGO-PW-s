/*
Algorithm Sum S(n);
Vars
    n, s, i, j, factorial: integer;
Begin
    repeat {
        write("Give a number: ");
        read(n);

        if (n < 0) write("Must be positive !");
    } until (n >= 0)

    s = 0;

    for i from 0 to n {
        factorial = 1;

        for j from 1 to 3*i+1 {
            factorial = factorial * j;
        }

        s = s + factorial;
    }

    write("The sum: ", s);
End.
*/

/*
Algorithm Difference S(n1) - S(n2);
Vars
    n1, n2, s, i, j, factorial: integer;
Begin
    repeat {
        write("Give two numbers: ");
        read(n1, n2);

        if (n1 <= 2 or n2 <= n1) write("Must follow 2 < n1 < n2 !");
    } until (2 < n1 and n1 < n2)

    s = 0;

    for i from n1 + 1 to n2 {
        factorial = 1;

        for j from 1 to 3*i+1 {
            factorial = factorial * j;
        }

        s = s + factorial;
    }

    write("The difference is: ", s);
End.
*/

#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) fact *= i;

    return fact;
}

int S(int p, int n) {
    int sum = 0;

    for (int i = p; i <= n; i++) sum += factorial(3*i+1);

    return sum;
}

int main_S() {
    int n;

    printf("Give a number: ");
    scanf("%d", &n);

    printf("The sum: %d", S(0, n));
}

int main_diff() {
    int x; int y;

    printf("Give two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("The difference: %d\n", -S(y, x));
    } else if (x < y) {
        printf("The difference: %d\n", S(x, y));
    } else {
        printf("The difference: 0\n");
    }
}