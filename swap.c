#include "monty.h"
/**
 * swap - Swap top two elems in a stack.
 * @head: pointer to head of the stack.
 * @line_number: line number.
 *
 * Return: nothing
 */
void swap(stack_t **head, unsigned int line_number)
{
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap,stack too short"\n, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;
}
