/*
    CH-230-A
    a5.p5.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

//the fuction that calls the scalar product
double scalarprod(int n, double v[], double w[]) {
  double sprod = 0;
  for (int i = 0; i < n; i++) {
    sprod = sprod + v[i] * w[i];
  }
  return sprod;
}
//the function that calculates the min and max
void minmax(int n, double v[]) {
  //declaring the variables
  int pozmin = 0, pozmax = 0;
  double minn = v[0];
  double maxx = v[0];
  for (int i = 0; i < n; i++) {
    //finding the minimum and its position
    if (minn > v[i]) {
      minn = v[i];
      pozmin = i;
    }
    //finding the maximum and its position
    if (maxx < v[i]) {
      maxx = v[i];
      pozmax = i;
    }
  }
  //printing the results 
  printf("The smallest = %lf\n", minn);
  printf("Position of smallest = %d\n", pozmin);
  printf("The largest = %lf\n", maxx);
  printf("Position of largest = %d\n", pozmax);
}

int main() {
  int n;
  scanf("%d", &n);
  double v[n], w[n];
  //scanning the variables from both vectors
  for (int i = 0; i < n; i++) {
    scanf("%lf", &v[i]);
  }
  for (int j = 0; j < n; j++) {
    scanf("%lf", &w[j]);
  }
  printf("Scalar product = %f\n", scalarprod(n, v, w));
  minmax(n, v);
  minmax(n, w);
  return 0;
}
