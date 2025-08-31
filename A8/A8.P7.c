/*
    CH-230-A
    a8.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char ch;
  int i;
  //we declare the files and open the first file
  FILE *firstfile, *secfile, *out;
  //initialise everything with 0
  char firstf[202] = {0}, secf[202] = {0};
  firstfile = fopen("text1.txt", "r");
  //we print the result if there is an error
  if (firstfile == NULL) {
    printf("Found an error\n");
    return 0;
  } else {
    //we read from the file until it is empty
    i = 0;
    //in the while we attribuite the value to ch
    //and check if it is different from EOF
    while ((ch = getc(firstfile)) != EOF) {
      firstf[i++] = ch;//adding to an array
    }
    firstf[i] = '\0';
  }
  fclose(firstfile);

  //we open the file and print the text if there is an error
  //otherwise we read from the file
  secfile = fopen("text2.txt", "r");
  if (secfile == NULL) {
    printf("Found an error\n");
    return 0;
  } else {
    i = 0;
    while ((ch = getc(secfile)) != EOF) {
      secf[i++] = ch;
    }
    secf[i] = '\0';
  }
  fclose(secfile);
  //we open the merge file and print the results
  //from the first and second file
  out = fopen("merge12.txt", "w");
  fprintf(out, "%s\n%s", firstf, secf);
  fclose(out);

  return 0;
}
