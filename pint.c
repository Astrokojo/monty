#include "monty.h"
/**
 * pint - prints the value at the top of the stack.
 * @head: head of stack
 * @line_number: line number
 *
 * Return:  nothing
 */
void pint(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u : can't pint, stack empty\n", line_number)
			return;
	}
	printf("%d\n", temp->n);
}
