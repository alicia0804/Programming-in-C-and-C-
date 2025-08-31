/*
    CH-230-A
    a6.p9.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

//the struct holds information about one node
//and a pointer to the next element
struct list {
  int info;
  struct list* next;
};

//using this we will insert a new integer at the beginning
//of my_list and returns updated list
struct list* pushfront(struct list* my_list, int value) {
  struct list* newelement;
  //allocating memory dynamically
  newelement = (struct list*)malloc(sizeof(struct list));
   //considering the null case
  if (newelement == NULL) {
    printf("Found an error in allocating memory\n");
    return my_list;
  }
  //going to the next element
  newelement->info = value;//setting the value of the new element
  //pointing the new element's next to the current head of the list
  newelement->next = my_list;
  return newelement;
}

//using this will insert at the end of my_list and returns
//the updated list
struct list* pushback(struct list* my_list, int value) {
  struct list *c, *newelement;
  c = my_list;//start cursor at the head of the list
  //allocating memory dynamically
  newelement = (struct list*)malloc(sizeof(struct list));
   //check if memory allocation was successful
  if (newelement == NULL) {
    printf("Found an error in allocating memory\n");
    return my_list;
  }
  newelement->info = value;
  newelement->next = NULL;
  //considering the null case
  if (my_list == NULL) return newelement;
  while (c->next != NULL) 
  c = c->next;//move cursor to the next element
  c->next = newelement;
  return my_list;
}

//removing the first element from the list
struct list* delete_elem(struct list* mylist) {
  if (mylist == NULL) {
    return mylist;//return if the list is empty
  }
  struct list* cnt = mylist;//pointer to the first node
  mylist = cnt->next;//update the head to the next node
  free(cnt);//deallocating the memory
  return mylist;//return the new head
}

 //the function prints the structure
void print_list(struct list* my_list) {
  struct list* p;
  //goes through the link list and prints the elements
  for (p = my_list; p; p = p->next) {
    printf("%d ", p->info);
  }
  printf("\n");
}

//deallocating the memory
void freelist(struct list* my_list) {
  struct list* nextelement;
  while (my_list != NULL) {
    nextelement = my_list->next;
    free(my_list);
    my_list = nextelement;
  }
}
//reverse the order of the elements 
struct list* reverse(struct list* my_list) {
  //starts from the head
  struct list* current = my_list;
  //initialises the previous element to null
  struct list* previous = NULL;
  struct list* next = NULL;

  while (current != NULL) {//goes through the list
    next = current->next;//stores the next node
    current->next = previous;
    previous = current;
    current = next;
  }
  return previous;//returns new head
}


void insert(struct list** my_list, int position, int value) {
  //if the position is invalid we exit the function
  if (position < 0) {
    printf("Invalid Position!\n");
    return;
  }

  struct list* newelement = (struct list*)malloc(sizeof(struct list));
  if (newelement == NULL) {
    printf("Found an error in allocating memory\n");
    return;
  }
  newelement->info = value;//set a value to a new node

  if (position == 0) {
    newelement->next = *my_list;//point new node to current head
    *my_list = newelement;
    return;
  }

  struct list* current = *my_list;
  for (int i = 0; i < position - 1; i++) {
  //check to see if we reached the end of the list
    if (current == NULL) {
      printf("Invalid Position!\n");
      free(newelement);
      return;
    }
    current = current->next;
  }

  if (current == NULL) {
    printf("Invalid Position!\n");
    free(newelement);
    return;
  }
//inserts the new node to a specified position
//links the new node to the next node
//links the current node to the new node
  newelement->next = current->next;
  current->next = newelement;
}

int main() {
  struct list* head = NULL;
  //declaring a flag that changes its value
  int ok = 1;
  char ch;
  int v = 0;
  int position;
  while (ok) {
    scanf(" %c", &ch);
    switch (ch) {
      case 'a'://adds to the end
        scanf("%d", &v);
        head = pushback(head, v);
        break;

      case 'b'://adds to the beginning
        scanf("%d", &v);
        head = pushfront(head, v);
        break;

      case 'r'://deletes the first element
        head = delete_elem(head);
        break;

      case 'p'://prints the list on the screen
        print_list(head);
        break;

      case 'q'://quits execution
        ok = 0;
        freelist(head);
        break;

      case 'R'://reverses elements
        head = reverse(head);
        break;

      case 'i'://inserts at a position
        scanf("%d %d", &position, &v);
        insert(&head, position, v);
        break;
    }
  }
  return 0;
}
