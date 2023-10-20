#include "monty.h"

/**
 * add - returns sum of first two elems in stack
 * @head: pointer to head
 * @line_number: line number
 *
 * Return: nothing
 */
void add(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L<line_number>: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->n += (*head)->next->n;

	pop(stack, line_number);
}
