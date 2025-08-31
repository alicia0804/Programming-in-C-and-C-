/*
    CH-230-A
    a8.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>

#include "stack.h"

int main() {
  unsigned int n;
  struct stack my_stack;
  //we initialise the count of elements in the stack to zero
  my_stack.count = 0;
  scanf("%u", &n);
  //while the statement is true we scan numbers
  while (1) {
    //we treat the case for 0 separately
        if (n == 0) {
            printf("The binary representation is: 0\n");
            scanf("%u", &n);
            continue;
        }
        //we convert the number into binary
        convertbinary(n,&my_stack);
        printf("The binary representation of %d is ",n);
        //checking if the stack is empty and printing
          while (!isEmpty(&my_stack)) {
            printf("%d", my_stack.array[my_stack.count - 1]);
            pop(&my_stack);
        }
        printf("\n");
     scanf("%u", &n);
  }
  printf("Quit\n");
  return 0;
}