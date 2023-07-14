#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 // 偶数
int A[N][N], B[N][N], C[N][N];
int A11[N / 2][N / 2];
int A12[N / 2][N / 2];
int A21[N / 2][N / 2];
int A22[N / 2][N / 2];
int B11[N / 2][N / 2];
int B12[N / 2][N / 2];
int B21[N / 2][N / 2];
int P1[N / 2][N / 2];
int P2[N / 2][N / 2];
int P3[N / 2][N / 2];
int P4[N / 2][N / 2];
int P5[N / 2][N / 2];
int P6[N / 2][N / 2];
int P7[N / 2][N / 2];

void func(int A11[][], int A12[][], int A21[][], int A22[][], int A[][]) {
  int i, j;
  for (i = 0; i < N / 2; ++i)
    for (j = 0; j < N / 2; ++j)
      A11[i][j] = A[i][j];
  for (i = 0; i < N / 2; ++i)
    for (j = N / 2 + 1; j < N; ++j)
      A12[i][j] = A[i][j];
  for (i = N / 2 + 1; i < N; ++i)
    for (j = 0; j < N / 2; ++j)
      A21[i][j] = A[i][j];
  for (i = N / 2 + 1; i < N; ++i)
    for (j = N / 2 + 1; j < N; ++j)
      A22[i][j] = A[i][j];
}

void starassen(D[][], A[][], B[][]) {
  func(A11, A12, A21, A22, A);
  func(B11, B12, B21, B22, B);
  func(P1);

  int main() {
    int i, j, k;

    for (i = 0; i < N; ++i) {
      for (j = 0; j < N; ++j) {
        A[i][j] = rand() % 100;
        B[i][j] = rand() % 100;
        C[i][j] = 0;
      }
    }
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; ++j) {
        for (k = 0; k < N; ++k) {
          C[i][j] += A[i][k] * B[j][k];
        }
      }
    }

    strassen(D, A, B);
  }
