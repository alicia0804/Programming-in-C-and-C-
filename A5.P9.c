/*
    CH-230-A
    a5.p9.c
    Stirbu Alicia Florentina
    astirbu@constructor.university

*/
#include <stdio.h>
#include <stdlib.h>

//function that scans the array
void readarray(int ***v, int z, int x, int y) {
  for (int i = 0; i < x; i++) { //rows
    for (int j = 0; j < y; j++) { //column
      for (int k = 0; k < z; k++) { //depth
        scanf("%d", &v[k][i][j]);
      }
    }
  }
}

//function that prints the section
void printarray(int ***v, int z, int x, int y) {
  for (int k = 0; k < z; k++) {
    //we start printing the values from depth
    printf("Section: %d\n", k + 1);
    //we print the values from rows
    for (int i = 0; i < x; i++) {
    //we print the values for collums
      for (int j = 0; j < y; j++) {
        printf("%d ", v[k][i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
}

int main() {
  int x, y, z;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  //allocating memory dynamically to the array 
  int ***v = (int ***)malloc(z * sizeof(int **));
  if (v == NULL) 
  exit(1);

  for (int i = 0; i < z; i++) {
    v[i] = (int **)malloc(x * sizeof(int *));
    if (v[i] == NULL) 
    exit(1);

    for (int j = 0; j < x; j++) {
      v[i][j] = (int *)malloc(y * sizeof(int));
      if (v[i][j] == NULL) 
      exit(1);
    }
  }
  readarray(v, z, x, y);//calling the functions
  printarray(v, z, x, y);

  //deallocating the memory from the array
  for (int i = 0; i < z; i++) {
    for (int j = 0; j < x; j++) {
      free(v[i][j]);
    }
    free(v[i]);
  }
  free(v);

  return 0;
}
