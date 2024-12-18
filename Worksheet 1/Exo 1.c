#include <stdio.h>

int main()
{
    int d, h, m, s;
    printf("Give the time: ");
    scanf("%d", &d);
    printf("Hours: %d \n", h);

    h = d / 3600;
    m = d % 3600 / 60;
    s = d % 3600 % 60;

    printf("Hours: %d \n", h);
    printf("Minutes: %d \n", m);
    printf("Seconds: %d \n", s);
}
