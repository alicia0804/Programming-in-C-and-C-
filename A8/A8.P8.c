 /*
    CH-230-A
    a8.p8.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int cnt = 0, words = 0;
  char ch, filen[100];
  FILE *filep;
  //we read the text from the file
  scanf("%s", filen);
  filep = fopen(filen, "r");
  if (filep == NULL) {
    printf("Error opening file\n");
    return 1;
  }
 //we count the number of words from the file using cnt
   while ((ch = fgetc(filep)) != EOF) {
    //if it is a word we count it using the flag
    if (isalpha(ch)) {
      words = 1;
    } else {
      if (words == 1) {
        words = 0;
        cnt++;
      }
    }
  }

  if (words == 1) {
    cnt++;
  }

  fclose(filep);

//we treat the separate cases for 0 words in the file
//as well as 1 word or more 
  if (cnt == 0)
    printf("There aren't words in the file\n");
  else if (cnt == 1)
    printf("The file contains 1 word\n");
  else
    printf("The file contains %d words\n", cnt);

  return 0;
}