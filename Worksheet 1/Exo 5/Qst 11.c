/*
Algorithm Automorphic;
Vars
    x, a, b: integer;
    automorphic: boolean;
Begin
    repeat {
        write("Give a number: ");
        read(x);

        if (x < 0) write("Must be a positive integer !");
    } until (x >= 0)

    a = x;
    b = x*x;
    automorphic = true;

    while (a and automorphic) {
        if (b mod 10 != a mod 10) automorphic = false;
        else {
            a = a div 10;
            b = b div 10;
        }
    }

    if (automorphic) write(x, " is automorphic !");
    else write(x, " is not automorphic.");
End.
*/

#include <stdio.h>

int automorphic(int x)
{
    int automorphic = 1;
    int y = x * x;

    while (x && automorphic)
    {
        if (x % 10 != y % 10)
            automorphic = 0;
        else
        {
            x /= 10;
            y /= 10;
        }
    }

    return automorphic;
}

int main()
{
    int x;

    printf("Give a number: ");
    scanf("%d", &x);

    if (automorphic(x))
    {
        printf("%d is automoprhic ! %d**2 = %d", x, x, x * x);
    }
    else
    {
        printf("%d is not automoprhic ! %d**2 = %d", x, x, x * x);
    }
}