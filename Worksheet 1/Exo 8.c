#include <stdio.h>
#include <math.h>

double cubeRoot(double A) {
    double epsilon = 1e-3;
    double x_n = 1;
    double x_next;

    while (1) {
        x_next = ((A / pow(x_n, 2)) + (2 * x_n)) / 3; // Newton's formula

        if (fabs(x_next - x_n) < epsilon) break;
        
        x_n = x_next;
    }

    return x_next;
}

int main() {
    double A;

    printf("Enter the number to find the cube root: ");
    scanf("%lf", &A);

    if (A < 0) {
        printf("The cube root of %.2lf is %.5lf\n", A, -cubeRoot(-A));
    } else {
        printf("The cube root of %.2lf is %.5lf\n", A, cubeRoot(A));
    }

    return 0;
}
