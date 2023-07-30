#include "monty.h"

/**
 * free_stack - The free doubly linked list
 * @head: The start of doubly linked list
 */

void free_stack(stack_t *head)
{
	stack_t *hold;

		while (head)
		{
			hold = head;
			head = (*head).next;
			free(hold);
		}
}
