/*
    CH-230-A
    a7.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>

#include "stack.h"

int main() {
  char ch;
  int nr;
  struct stack my_stack;
  //we initialise the count of elements in the stack to zero
  my_stack.count = 0;
  scanf("%c", &ch);
  while (ch != 'q') {
    switch (ch) {
      case 's':
        scanf("%d", &nr);
        getchar();
        //pushes an element into the stack
        push(&my_stack, nr);
        break;
      case 'p':
      //pops an element off the stack
        pop(&my_stack);
        break;
      case 'e':
      //empties the whole stack
        empty(&my_stack);
        break;
    }
    scanf("%c", &ch);
  }
  printf("Quit\n");
  return 0;
}