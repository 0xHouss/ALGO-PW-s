#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Give the max number: ");
        scanf("%d", &n);
    } while (n <= 2);

    int T[100];

    for (int i = 0; i < n; i++)
    {
        T[i] = i + 1;
    }

    for (int i = 1; i < n; i++)
    {
        if (T[i] == 0)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (T[j] == 0)
                continue;

            if (T[j] % T[i] == 0)
                T[j] = 0;
        }
    }


    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (T[i] > 1) {
            T[j] = T[i];
            j += 1;
        }
    }
    n = j;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
}