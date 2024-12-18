/*
Algorithm Mirror;
Vars x, a, y: integer;
Begin
    repeat {
        write("Give a number: ");
        read(x);

        if (x < 0) write("Must be a positive integer !");
    } until (x >= 0)

    a = x; y = 0;

    while (a) {
        y = y * 10 + (a mod 10);
        a = a div 10;
    }

    write("The mirror of", x, " is: ", y);
End.
*/

#include <stdio.h>

int mirror(int x) {
    int y = 0;

    while (x)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }

    return y;
}

int main()
{
    int x;

    printf("Give a number: ");
    scanf("%d", &x);

    printf("The mirror of %d is: %d", x, mirror(x));
}