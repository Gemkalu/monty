#include "monty.h"

/**
 * nop - This Does nothing.
 * @stack: This is Unused.
 * @line_n: This is Unused.
 */
void nop(stack_t **stack, unsigned int line_n)
{
	(void)*stack;
	(void)line_n;
}

/**
 * pchar - Print the char based on ascii value.
 * @stack: beginning of linked list.
 * @line_n: line number.
 */
void pchar(stack_t **stack, unsigned int line_n)
{
	stack_t *h = *stack;

	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}
	if (!(h->n > 64 && h->n < 91) && !(h->n > 96 && h->n < 123))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_n);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)h->n);
}

/**
 * pstr - Print string based of ascii values in linked list.
 * @stack: Beginning of linked list.
 * @line_n: Line number.
 */
void pstr(stack_t **stack, unsigned int line_n)
{
	stack_t *h = *stack;
	char string[1000];
	int i = 0;
	(void)line_n;

	memset(string, 0, 1000);
	if (!h)
		printf("\n");
	while (h)
	{
		/*if (h->n < 1 && h->n > 127)*/
		if (!(h->n > 64 && h->n < 91) && !(h->n > 96 && h->n < 123))
		{
			break;
		}
		string[i] = (char)h->n;
		i++;
		h = h->next;
	}
	printf("%s\n", string);
}
