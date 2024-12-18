#include <stdio.h>

int mirror(int x) {
  int y = 0;

  while (x != 0) {
    y = y * 10 + x % 10;
    x /= 10;
  }

  return y;
}

void intfrac(float x, int *integer, float *frac) {
  (*integer) = (int)x;
  (*frac) = x - (*integer);
}

int main() {
  int integer;
  float frac;

  intfrac(12.123, &integer, &frac);

  printf("%d %f", integer, frac);
}
