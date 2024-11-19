#include <stdio.h>
int main()
{
    int T[100] = {2, 5, 3, 8, 42, -100, 238, 0};

    int N = 8;

    int min = T[0];
    int max = T[0];
    int prodpos = 1;
    int avgneg = 0;
    int numneg = 0;

    for (int i = 0; i < N; i++) {
        int x = T[i];

        if (x < min) {
            min = x;
        }
    
        if (x > max) {
            max = x;
        }

        if (x > 0) {
            prodpos *= x; 
        }
    
        if (x < 0) {
            avgneg += x; 
            numneg += 1; 
        }
    }

    avgneg /= numneg;

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Product of positive integers: %d\n", prodpos);
    printf("Average of negative integers: %d\n", avgneg);
}