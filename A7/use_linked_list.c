/*
    CH-230-A
    a7.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"


int main() {
    struct list* head = NULL;
    //declaring a flag that changes its value
    int ok = 1;
    char ch;
    int v = 0;

    while (ok) {
        scanf(" %c", &ch); 
        switch (ch) {
            case 'a': //adds to the end
                scanf("%d", &v);
                head = pushback(head, v); 
                break;

            case 'b': //adds to the beginning
                scanf("%d", &v);
                head = pushfront(head, v);
                break;

            case 'r': //deletes the first element
                head = delete_elem(head);
                break;

            case 'p': //prints the list on the screen
                print_list(head);
                break;

            case 'q': //quits execution
                ok = 0;
                freelist(head);
                break;
        }
    }
    return 0;
}
