/*
    CH-230-A
    a7.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//converts all characters into upper cases then prints them
void a(char a[100]) {
  //allocates memory dynamically
  char *scopy = (char *)malloc(sizeof(char) * 100);
  if (scopy == NULL) {  // considering the case for null
    printf("There is an error in allocating memory");
    exit(1);
  }
  //making a copy for our string and transforming letters
  //into upper
  strcpy(scopy, a);
  int length = strlen(scopy);
  for (int i = 0; i < length; i++) {
    if (scopy[i] >= 'a' && scopy[i] <= 'z'){
    scopy[i] = toupper(scopy[i]);
    }
  }
  printf("%s", scopy);
  printf("\n");
  free(scopy);
}

//converts all characters into lower case then prints them
void b(char a[100]) {
  //allocates memory dynamically
  char *scopy = (char *)malloc(sizeof(char) * 100);
  if (scopy == NULL) {
    printf("There is an error in allocating memory");
    exit(1);
  }
  //making a copy for our string and transforming 
  //letters into lower
  strcpy(scopy, a);
  int length = strlen(scopy);
  for (int i = 0; i < length; i++) {
    if (scopy[i] >= 'A' && scopy[i] < 'Z') {
      scopy[i] = tolower(scopy[i]);
    }
  }
  printf("%s", scopy);
  printf("\n");
  free(scopy);
}

//converts all lower case into upper 
//and all upper into lower
void c(char a[100]) {
  //allocates memory dynamically
  char *scopy = (char *)malloc(sizeof(char) * 100);
  if (scopy == NULL) {
    printf("There is an error in allocating memory");
    exit(1);
  }
  //making a copy for our string and 
  //transforming the characters
  strcpy(scopy, a);
  int length = strlen(scopy);
  for (int i = 0; i < length; i++) {
    if (scopy[i] >= 'A' && scopy[i] <= 'Z')
      scopy[i] = tolower(scopy[i]);
    else if (scopy[i] >= 'a' && scopy[i] <= 'z')
      scopy[i] = toupper(scopy[i]);
  }
  printf("%s", scopy);
  printf("\n");
  free(scopy);
}

//defines a array of three pointer functions 
//having a char as parameter
void (*funarr[3])(char string[100]) = {a, b, c};

int main() {
  int n;
  char s[100];
  //scanning the string and the number
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = 0;
  scanf("%d", &n);
  while (n != 4) {
    (*funarr[n - 1])(s);
    scanf("%d", &n);
  }
  return 0;
}
