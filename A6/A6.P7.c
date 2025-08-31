/*
    CH-230-A
    a6.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int set3bits(unsigned char ch, int a, int b, int c) {
  // create a mask in which the bits we want to switch are
  // allocated on their designated position
  unsigned char mask = (1 << a) | (1 << b) | (1 << c);
  return ch | mask;
}
int main() {
  unsigned char ch;
  int a, b, c;
  scanf("%c", &ch);
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  //printing the decimal and the binary representation
  printf("The decimal representation is:%d\n", ch);
  printf("The binary representation is: ");
  for (int i = 7; i >= 0; i--) {
  //declaring a variable for a mask   
    unsigned char pattern = 1 << i;
    //printing the result using the AND operator
    printf("%d", (ch & pattern) ? 1 : 0);
  }
  printf("\n");
  //printing the result after setting the bits 
  ch = set3bits(ch, a, b, c);
  printf("After setting the bits: ");
  for (int i = 7; i >= 0; i--) {
    unsigned char pattern = 1 << i;
    printf("%d", (ch & pattern) ? 1 : 0);
  }
  return 0;
}
