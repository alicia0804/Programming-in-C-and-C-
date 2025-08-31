/*
    CH-230-A
    a5.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s1[101], s2[101];
  scanf("%[^\n]s", s1);
  getchar();//emptying the buffer
  scanf("%[^\n]s", s2);
  int length1 = strlen(s1);
  int length2 = strlen(s2);
  //dinamically allocating the memory to concat
  char *concat = (char *)malloc((length1 + length2 + 1) * sizeof(char));
  //considering the case where the memory allocation fails
  if (concat == NULL) {
    exit(1);
  }
  //copying the first string into concat
  strcpy(concat, s1);
  //concatenating the strings and printing them
  strcat(concat, s2);
  printf("Result of concatenation: %s", concat);
  free(concat);
  return 0;
}
