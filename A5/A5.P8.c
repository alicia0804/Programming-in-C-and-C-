/*
    CH-230-A
    a5.p8.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

//function that reads the elements in the matrix
void readmatrices(int **m, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &m[i][j]);
    }
  }
}

//function that prints the elements
void printmatrices(int **m, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

//functiin that multiplies the matrices
void multiplication(int **A, int **B, int **m3, int n, int m, int p) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      m3[i][j] = 0;
      for (int k = 0; k < m; k++) {
        m3[i][j] = m3[i][j] + A[i][k] * B[k][j];
      }
    }
  }
}

int main() {
  int n, m, p;
  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%d", &p);

//dynamically allocating memory to matrix A
  int **A = (int **)malloc(n * sizeof(int *));
  if(A==NULL)
  exit(1);
  for (int i = 0; i < n; i++) {
    A[i] = (int *)malloc(m * sizeof(int));
    if(A[i]==NULL)
    exit(1);
  }

//dynamically allocating memory to B and m3
//m3 being the matrix for the product 
  int **B = (int **)malloc(m * sizeof(int));
  if(B==NULL)
  exit(1);
  for (int i = 0; i < n; i++) {
    B[i] = (int *)malloc(p * sizeof(int));
    if(B[i]==NULL)
    exit(1);
  }

  int **m3 = (int **)malloc(n * sizeof(int));
  if(m3==NULL)
  exit(1);
  for (int i = 0; i < n; i++) {
    m3[i] = (int *)malloc(p * sizeof(int));
    if(m3[i]==NULL)
    exit(1);
  }

 //scanning the elements in the matrices
  readmatrices(A, n, m);
  readmatrices(B, m, p);
  //printing the results
  multiplication(A, B, m3, n, m, p);

  printf("Matrix A:\n");
  printmatrices(A, n, m);

  printf("Matrix B:\n");
  printmatrices(B, m, p);

  printf("The multiplication result AXB:\n");
  printmatrices(m3, n, p);

//deallocating the memory for the matrices
  for (int i = 0; i < n; i++) {
    free(A[i]);
  }
  free(A);

  for (int i = 0; i < n; i++) {
    free(B[i]);
  }
  free(B);

  for (int i = 0; i < n; i++) {
    free(m3[i]);
  }
  free(m3);
  return 0;
}
