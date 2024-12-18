#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

double power(double x, int n)
{
    double r = 1;

    for (int i = 1; i <= n; i++)
        r *= x;

    return r;
}

double cosine(double x, int n)
{
    double r;

    for (int i = 0; i <= n; i++)
    {
        r += power(-1, i) * power(x, 2 * i) / factorial(2 * i);
        printf("%lf\n", r);
    }

    return r;
}

double test_cos(double x, int n)
{
    double s = 1;
    double a = 1;
    double b = 1;

    for (int i = 1; i <= n; i++)
    {
        a *= x * x;
        b *= (2 * i) * (2 * i - 1);

        if (i % 2 == 0)
        {
            s += a / b;
        }
        else
        {
            s -= a / b;
        }
    }

    return s;
}



int main()
{
    double x;
    int n;

    printf("Give a number and an order: ");
    scanf("%lf %d", &x, &n);

    printf("cos(%lf) = %lf\n", x, test_cos(x, n));
}