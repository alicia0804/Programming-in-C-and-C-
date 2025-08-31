/*
    CH-230-A
    a8.p5.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
//we declare the characters and the files
  char c1, c2;
  FILE *fr, *fw;
  //we open the first file
  fr = fopen("chars.txt", "r");

//scanning the values
  if (fr) {
    c1 = getc(fr);
    c2 = getc(fr);
  } else {
    printf("Unable to open the file");
    exit(1);
  }

  fclose(fr);
  //opening the second file
  fw = fopen("codesum.txt", "w");
  fprintf(fw, "%d\n", (int)c1 + (int)c2);//printing the result
  fclose(fw);
  return 0;
}