/*
    CH-230-A
    a8.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include <limits.h>
#include <stdio.h>
#include "stack.h"

//we push the number onto the stack
void push(struct stack *my_stack, int number) {
    //we check for stack overflow
    if (my_stack->count == 12) {
        printf("Stack Overflow\n");
    } else {
        //we place the number inside the stack array
        //and add the count
        my_stack->array[my_stack->count] = number;
        my_stack->count++;
    }
}
//we pop a number from the top of the stack
void pop(struct stack *my_stack) {
    //we check for stack underflow
    if (isEmpty(my_stack)) {
        printf("Stack Underflow\n");
    } else {
        //we decrease the count
        my_stack->count--;
    }
}


void empty(struct stack *my_stack) {
    printf("Emptying Stack ");
    //removes top element and decreases the count
    while (!isEmpty(my_stack)) {
        pop(my_stack);
    }
}

int isEmpty(struct stack *my_stack) {
    return my_stack->count == 0;
}
//if the number is different from 0 we calculate
//the remainder(rest) and push onto the stack 
//as well as divide the number by 2
void convertbinary(unsigned int n, struct stack *my_stack) {
    while (n != 0) {
        int rest = n % 2;
        push(my_stack, rest);
        n /= 2;
    }
}
