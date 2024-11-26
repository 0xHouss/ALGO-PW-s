#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("How many numbers: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Number must be stricly positive !\n");
    } while (n <= 0);

    int npos = 0;
    int sumpos = 0;

    int nneg = 0;
    int sumneg = 0;

    int nnull = 0;

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        if (x > 0)
        {
            npos += 1;
            sumpos += x;
        }
        else if (x < 0)
        {
            nneg += 1;
            sumneg += x;
        }
        else
            nnull += 1;
    }

    printf("Number of positive values: %d\n", npos);
    printf("Sum of positive values: %d\n", sumpos);
    printf("Number of negative values: %d\n", nneg);
    printf("Sum of negative values: %d\n", sumneg);
    printf("Number of null values: %d\n", nnull);
}