#include <stdio.h>

int main()
{
    int N;
    int T[101];

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
        printf("Give the number %d: ", i+1);
        scanf("%d", &T[i]);
    }

    int VAL;
    int position;

    printf("Give the number to insert: ");
    scanf("%d", &VAL);

    do
    {
        printf("Give the position where to insert the number: ");
        scanf("%d", &position);

        if (position < 0)
            printf("The position must be positive!\n");
        if (position > N)
            printf("The position must be less than or equal to the length of the array!\n");
    } while (position < 0 || position > N);

    for (int i = N; i > position; i--)
        T[i] = T[i-1];

    T[position] = VAL;

    for (int i = 0; i < N+1; i++)
        printf("%d\n", T[i]);

    return 0;
}