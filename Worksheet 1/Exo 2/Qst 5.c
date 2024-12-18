#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Infinite solutions\n");
            } else {
                printf("No solution\n");
            }
        } else {
            double x = -(c / b);
            printf("One solution: x = %.2lf\n", x);
        }
    } else {
        if (b == 0) {
            if (c == 0) {
                printf("One root: x = 0\n"); 
            } else if (c / a > 0) {
                printf("No real solutions\n");
            } else {
                double root1 = sqrt(-c / a);
                double root2 = -root1;
                printf("Two solutions: x1 = %.2lf, x2 = %.2lf\n", root1, root2);
            }
        } else {
            double discriminant = b * b - 4 * a * c;

            if (discriminant > 0) {
                double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
                double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
                printf("Two solutions: x1 = %.2lf, x2 = %.2lf\n", root1, root2);
            } else if (discriminant == 0) {
                double root = -b / (2.0 * a);
                printf("One solution: x = %.2lf\n", root);
            } else {
                printf("No real solutions\n");
            }
        }
    }

    return 0;
}
