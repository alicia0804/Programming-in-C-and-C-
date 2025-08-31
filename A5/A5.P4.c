/*
    CH-230-A
    a5.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university

*/
#include <stdio.h>
#include <stdlib.h>

//the function that divides by 5
void divby5(float *v, int n) {
  for (int i = 0; i < n; i++) {
    v[i] = v[i] / 5;
  }
}

int main() {
  int n;
  scanf("%d", &n);//scanning the number of elements
  //allocating the memory dynamically
  float *v = (float *)malloc(n * sizeof(float));
  if (v == NULL) {//in case the memory fails
   exit(1);
  }
  for (int i = 0; i < n; i++) {
    scanf("%f", &v[i]);
  }
  divby5(v, n);//calling the function
  //printing the results
  for (int i = 0; i < n; i++) {
    printf("%f ", v[i]);
  }
  free(v);
  return 0;
}
