/*
Algorithm GCD_Successive_Substractions;
Vars x, y, a, b, c: integer;
Begin
    repeat {
        write("Give two numbers: ");
        read(x, y);

        if (x < 0 or y < 0) write("Must be positive !");
    } until (x >= 0 and y >= 0)

    if (x > y) a = x; b = y;
    else a = y; b = x;

    while (a - b > 0) {
        c = a - b;

        if (c >= b) a = c;
        else b = c;
    }

    write("The GCD of ", x, " and ", y, " is: ", b);
End.
*/

/*
Algorithm GCD_Euclidian_Divison;
Vars x, y, a, b, c: integer;
Begin
    repeat {
        write("Give two numbers: ");
        read(x, y);

        if (x < 0 or y < 0) write("Must be positive !");
    } until (x >= 0 and y >= 0)

    if (x > y) a = x; b = y;
    else a = y; b = x;

    while (a mod b > 0) {
        c = a mod b;

        if (c >= b) a = c;
        else b = c;
    }

    write("The GCD of ", x, " and ", y, " is: ", b);
End.
*/

#include <stdio.h>

int gcd_substractions(int x, int y)
{
    if (y > x)
    {
        int t = x;
        x = y;
        y = t;
    }

    while (x - y > 0)
    {
        int z = x - y;

        if (z >= y)
            x = z;
        else
            y = z;
    }

    return y;
}

int gcd_euclidian(int x, int y)
{
    if (y > x)
    {
        int t = x;
        x = y;
        y = t;
    }

    while (x % y > 0)
    {
        int z = x % y;

        if (z >= y)
            x = z;
        else
            y = z;
    }

    return y;
}

int main()
{
    int x, y;

    printf("Give two numbers: ");
    scanf("%d %d", &x, &y);

    int gcd_sub = gcd_substractions(x, y);
    int gcd_euc = gcd_substractions(x, y);

    printf("The GCD with Successive substractions: %d\nThe GCD with Euclidian division: %d", gcd_sub, gcd_euc);
}