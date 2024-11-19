#include <stdio.h>
int main()
{
    int D[100];
    int T[100] = {2, 5, 3, 8, 42, -100, 238, 0};
    
    int N = 8;
    int j = 0;

    for (int i = 1; i < 99; i++)
    {
        if (T[i] != 0)
        {
            D[j] = T[i];
            j++;
        }

        printf("%d", D[i]);
    }
}