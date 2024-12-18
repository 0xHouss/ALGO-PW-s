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

    int VAL;

    printf("Give the value to search for: ");
    scanf("%d", &VAL);

    int occurences = 0;

    for (int i = 0; i < N; i++)
        if (T[i] == VAL)
            occurences++;

    printf("The number of occurences of %d is: %d\n", VAL, occurences);
}