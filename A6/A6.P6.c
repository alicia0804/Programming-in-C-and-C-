/*
    CH-230-A
    a6.p6.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  unsigned char ch;
  //scanning the value and printing the binary representation
  scanf(" %c", &ch);
  printf("The decimal representation is:%d\n", ch);
  //checking every position of the bits
  printf("The binary representation is: ");
  for (int i = 7; i >= 0; i--) {
    //we create a mask that corresponds to each bit position
    //by shifting 1 to the left by i positions.
    unsigned char pattern = 1 << i;
    //checking to see if the bit corresponding to the mask
    //is set printing 1 or 0 accordingly
    printf("%d", (ch & pattern) ? 1 : 0);
  }
  printf("\n");
}
