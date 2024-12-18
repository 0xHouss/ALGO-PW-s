/*
Algorithm Semi_Prime;
Vars
    n, s, i, j: integer;
    sp, p: boolean;
Begin
    repeat {
        write("Give a number: ");
        read(n);

        if (n < 1) write("Must be bigger than 0 !");
    } until (n >= 1)

    s = 0;

    for num from 1 to N {
        semiprime = False

        for i from 2 to num/2 {
            j = num / i

            if (num % i == 0 and j != i) {
                iprime = True;
                jprime = True;

                for k from 2 to i/2 {
                    if i % k == 0 {
                        iprime = False;
                        break
                    }
                }

                for k from 2 to j/2 {
                    if j % k == 0 {
                        jprime = False;
                        break
                    }
                }

                if jprime and iprime {
                    semiprime = True;
                }
            }
        }

        if semiprime {
            s += num
        }
    }
End.
*/

#include <stdio.h>

int prime(int x)
{
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return 0;

    return 1;
}

int semi_prime(int x)
{
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0 && x / i != i && prime(x / i) && prime(i))
            return 1;

    return 0;
}

int main()
{
    int n;

    printf("Give a number: ");
    scanf("%d", &n);

    int s = 0;

    for (int i = 1; i <= n; i++)
        if (semi_prime(i))
            s += i;

    printf("The sum: %d", s);
}