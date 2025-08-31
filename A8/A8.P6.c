/*
    CH-230-A
    a8.p6.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
//we add file pointers for the input and output files
  FILE *firstfile, *secfile, *out; 
  double nr1, nr2;   
  //we add arrays to hold the names of the files              
  char firstfilen[32], secfilen[32];

  printf("First file name: ");
  scanf("%s", firstfilen);

  printf("Second file name: ");
  scanf("%s", secfilen); 

  firstfile = fopen(firstfilen, "r");
  //we check if the file opened successfully
  if (firstfile == NULL) { 
    printf("Error opening %s\n", firstfilen);
    return 0; 
  } else {
    fscanf(firstfile, "%lf", &nr1); 
  }
  fclose(firstfile); 
  //we open the second file for reading
  secfile = fopen(secfilen, "r");
  //we check if the file opened successfully
  if (secfile == NULL) { 
    printf("Error opening %s\n", secfilen);
    return 0;
  } else {
    fscanf(secfile, "%lf", &nr2); 
  }
  fclose(secfile);

  out = fopen("results.txt", "w");
  //write the results of calculations to the output file
  fprintf(out, "Sum: %lf\n", nr1 + nr2); 
  fprintf(out, "Difference: %lf\n", nr1 - nr2);
  fprintf(out, "Product: %lf\n", nr1 * nr2);
  fprintf(out, "Division: %lf\n", nr1 / nr2);
  fclose(out); 
  return 0;
}
