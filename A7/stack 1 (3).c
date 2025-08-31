/*
    CH-230-A
    a7.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <limits.h>
#include <stdio.h>
#include "stack.h"

//we push a number onto the stack
void push(struct stack *my_stack, int number) {
    printf("Pushing ");
    //we check for stack overflow
    if ((*my_stack).count == 12) {
        printf("Stack Overflow\n");
    } 
    else {
        printf("%d\n", number);
        //we place the number inside the stack array 
        //and add the count
        (*my_stack).array[(*my_stack).count] = number;
        (*my_stack).count++;
    }
}

//we pop a number from the top of the stack
void pop(struct stack *my_stack) {
    printf("Popping ");
    //check for stack underflow
    if (isEmpty(my_stack) == 1) {
        printf("Stack Underflow\n");
    } else {
        //we print the top number and then mark it as UINT_MAX
        printf("%d\n", (*my_stack).array[(*my_stack).count - 1]);
        (*my_stack).array[(*my_stack).count - 1] = UINT_MAX; 
        (*my_stack).count--; //decrementing the count
    }
}

//we empty the stack by popping all elements and printing them
void empty(struct stack *my_stack) {
    printf("Emptying Stack ");
    //we loop through the stack from top to bottom
    for (int i = (*my_stack).count - 1; i >= 0; i--) {
        //print the top element
        printf("%d ", (*my_stack).array[(*my_stack).count - 1]);
        (*my_stack).array[(*my_stack).count - 1] = UINT_MAX;
        (*my_stack).count--; //decrementing the count
    }
    printf("\n");
}

//we check if the stack is empty
int isEmpty(struct stack *my_stack) {
  if ((*my_stack).count == 0)
    return 1;
  else
    return 0;
}
