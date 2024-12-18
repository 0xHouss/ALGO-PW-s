#include <stdio.h>
int main()
{
    int N, T[100];

    do
    {
        printf("Give the length of the array: ");
        scanf("%d", &N);

        if (N <= 0)
            printf("The length of the array must be positive!\n");

        if (N > 100)
            printf("The length of the array must be less than or equal to 100!\n");

    } while (N <= 0 || N > 100);

    for (int i = 0; i < N; i++)
    {
        printf("Give the number %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    int min = T[0];
    int max = T[0];
    int prodpos = 1;
    double avgneg = 0;
    int numneg = 0;

    for (int i = 0; i < N; i++)
    {
        int x = T[i];

        if (x < min)
            min = x;

        if (x > max)
            max = x;

        if (x > 0)
            prodpos *= x;

        if (x < 0)
        {
            avgneg += x;
            numneg += 1;
        }
    }

    if (numneg)
        avgneg /= numneg;

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Product of positive integers: %d\n", prodpos);
    printf("Average of negative integers: %.2f\n", avgneg);
}