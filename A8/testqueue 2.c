/*
    CH-230-A
    a8.p2.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
/**
 * @file testqueue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main() 
{
	Queue line;
	Item temp = 0;
	char ch;
	
	initialize_queue(&line);
	
	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, q to quit:");
		}
	}
	puts("Bye.");
	return 0;
}
