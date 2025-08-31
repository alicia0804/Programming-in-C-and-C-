/*
    CH-230-A
    a5.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university

*/
#include <stdio.h>
#include <stdlib.h>

int count_lower(char *str) {
  int cnt = 0;
  char *pointer = str;//declaring a pointer
  while (*pointer != '\0') {
    //if the character is a small letter we count it
    if (*pointer >= 'a' && *pointer <= 'z') cnt++;
    pointer++;
  }
  return cnt;
}

int main() {
  char s1[51];
  while (1) {
    fgets(s1, sizeof(s1), stdin);//scanning the string
    //exiting the while when finding an empty string
    if (s1[0] == '\n') break;
    printf("Number of lowercase characters:%d\n", count_lower(s1));
  }
  return 0;
}