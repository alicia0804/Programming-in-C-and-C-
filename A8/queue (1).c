/*
    CH-230-A
    a8.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item pitem, Queue *pq)
{
	Node *newel = (Node*) malloc(sizeof(Node));
	//we dynamically allocate memory to new node
	if(newel == NULL){
		printf("There is an error in allocating memory");
		exit(1);
	}
	//we copy the item to the new node
	newel -> item = pitem;
	//we set the next pointer to null
	newel -> next = NULL;
	//we set the front node after
	//we check that the queue is empty
	if(queue_is_empty(pq)){
		pq -> front = newel;
	}
	else {
		//we set the current rear node's next
		//pointer to new node (only if the queue already exists)
		pq -> rear -> next=newel;
	}
	//setting rear pointer to new
	pq -> rear = newel;
	//increasing the number of items
	pq -> items = pq -> items + 1;
        return 0;
}
int dequeue(Item *pitem, Queue *pq) {
  //checking to see if the queue is empty
  if (queue_is_empty(pq)) return -1;
  *pitem = pq->front->item;
  //we reset the front pointer to the next
  //item in the queue
  pq->front = pq->front->next;
  free(pitem);
  //if the last item is removed we reset the rear and
  //front pointer to NULL after we check that the
  //queue is empty
  if (queue_is_empty(pq)) initialize_queue(pq);
  //if it is empty we decrease the number of elements
  else
    pq->items = pq->items - 1;
  return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
void printq(Queue pq) {
    //we use a temporary pointer to go through the queue
    Node *current = pq.front; 
    //we go through the queue and print elements 
    while (current != NULL) {
        printf("%d ", current->item);
        current = current->next;//moving to next node
    }
    printf("\n");
}



