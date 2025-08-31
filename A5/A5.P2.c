/*
    CH-230-A
    a5.p2.c
    Stirbu Alicia Florentina
    astirbu@constructor.university

*/
#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size) {
  for (int j = 0; j < size; j++) {
    printf("%.3f ", arr[j] / 5);
  }
  printf("\n");
}

int main() {
  //we declare the vector with the initial values
  float v1[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
  //we print it as it was before
  printf("Before:\n");
  for (int i = 0; i < 6; i++) {
    printf("%f ", v1[i]);
  }
  //we print the numbers/5 on a new row
  printf("\n");
  printf("After:\n");
  divby5(v1, 6);//calling the function

  return 0;
}
