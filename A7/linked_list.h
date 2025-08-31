/*
    CH-230-A
    a7.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include<stdio.h>
#include<stdlib.h>
//the struct holds information about one node
//and a pointer to the next element
struct list {
    int info;
    struct list *next;
};
//using this we will insert a new integer at the beginning
//of my_list and returns updated list
struct list* pushfront(struct list *my_list, int value);

//using this will insert at the end of my_list and returns
//the updated list
struct list* pushback(struct list* my_list, int value);

//removing the first element from the list
struct list* delete_elem(struct list* mylist);

//the function prints the structure
void print_list(struct list* my_list);

//deallocating the memory
void freelist(struct list* my_list);