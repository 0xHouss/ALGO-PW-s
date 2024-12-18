#include <stdio.h>
int main()
{
    int N;
    int T[100];

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

    for (int i = N - 1; i >= 0; i--)
        printf("%d\n", T[i]);

    return 0;
}