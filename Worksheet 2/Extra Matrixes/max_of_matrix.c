#include <stdio.h>

#define mrows 100
#define mcols 100

int main()
{
    int T[mrows][mcols];

    int rows, cols;

    do
    {
        printf("Enter the number of rows: ");
        scanf("%d", &rows);

        if (rows <= 0 || rows > 100)
            printf("Number of rows must be between 1 and 100\n");

    } while (rows <= 0 || rows > 100);

    do
    {
        printf("Enter the number of columns: ");
        scanf("%d", &cols);

        if (cols <= 0 || cols > 100)
            printf("Number of columns must be between 1 and 100\n");

    } while (cols <= 0 || cols > 100);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of T[%d][%d]: ", i, j);
            scanf("%d", &T[i][j]);
        }

    int max = T[0][0];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (T[i][j] > max)
                max = T[i][j];

    printf("The max is: %d", max);
}