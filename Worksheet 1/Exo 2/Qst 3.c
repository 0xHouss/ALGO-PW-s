#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("Max: %d\n", max);
}