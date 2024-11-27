/*
Algorithm Exo_12;
Vars n, r, p, i, j: integer;
Begin
    Repeat
        Write("Give a number n (n > 3): ");
        Read(n);

        If n <= 3 Then
            Write("n must be greater than 3 !");
        EndIf;
    Until n > 3;

    r := 0;

    For i := 4 To n Do
        p := 1;

        For j := 1 To i Do
            p := p * (i - 3) * (i + 4);
        Done;

        r := r + p;
    Done;

    Write("S(n) = ", r);
End.
*/

#include <stdio.h>

int power(int a, int b)
{
    int r = 1;

    for (int i = 0; i < b; i++)
        r *= a;

    return r;
}

int main()
{
    int n;

    do
    {
        printf("Give a number n (n > 3): ");
        scanf("%d", &n);

        if (n <= 3)
            printf("n must be greater than 3 !\n");
    } while (n <= 3);

    int r = 0;

    for (int i = 4; i <= n; i++)
        r += power((i-3)*(i+4), i);

    printf("Result: %d\n", r);
}