/*
Function Sym(A: Array[20][20] of Integer, N: Integer): Boolean;
Var I, J: Integer;
Begin
  For I from 2 to N do
    For J from 1 to I-1 do
      if A[I][J] != A[J][I] then
        Return False;
      Eif;
    Done;
  Done;

  Return True;
End.
*/

#include <stdio.h>

#define mrows 20
#define mcols 20

int sym(int A[20][20], int N) {
  for (int i=1; i < N; i++)
    for (int j=0; j < i; j++)
      if (A[i][j] != A[j][i])
        return 0;

  return 1;
}

int main() {
  int A[20][20], N;

  do {
    printf("Give the size of the matrix (0 < N <= %d)\n", mrows);
    scanf("%d",&N);
  } while (N < 1 || N > mrows);

  for (int i=0; i < N; i++)
    for (int j=0; j <N; j++) {
      printf("Give the value at %d %d\n", i, j);
      scanf("%d", A[i][j]);
    }

  for (int i=0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%d ", A[i][j]);
    printf("\n");
  }

  // printf("%d", sym(A, 3));
}
