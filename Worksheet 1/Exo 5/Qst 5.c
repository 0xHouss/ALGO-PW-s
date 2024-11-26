#include <stdio.h>

int main()
{
    int val;

    printf("What number are you counting: ");
    scanf("%d", &val);

    int n;

    do
    {
        printf("How many numbers: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Number must be stricly positive !\n");
    } while (n <= 0);

    int nocc = 0;

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        if (x == val)
            nocc += 1;
    }

    printf("Number of occurences of %d is : %d\n", val, nocc);
}