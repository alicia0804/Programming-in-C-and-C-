/*
    CH-230-A
    a8.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/


struct stack{
    unsigned int count;
    int array[12];
};

//pushes an element into the stack
void push(struct stack *my_stack, int nr);

//pops an element off the stack
void pop(struct stack *my_stack);

//empties the whole stack
void empty(struct stack *my_stack);

//checks if the stack is empty
int isEmpty(struct stack *my_stack);
//converting to binary
void convertbinary(unsigned int number, struct stack *my_stack);

