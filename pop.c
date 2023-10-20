#include "monty.h"
/**
 * pop - Remove first node in stack.
 * @head: pointer to the head of stack.
 * @line_number: line numver
 *
 * Retunr: nothing
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *next_node;

	if (!head || !*head)
	{
		fprintf(stderr, "L%u:  can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	next_node = (*head)->next;
	free(*head);
	*top = next_node;
}
