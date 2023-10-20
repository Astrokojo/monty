#include "monty.h"
/**
 * push - adds an element to the top of stack
 * @head: head of stack.
 * @line_number: unused
 *
 * Return: nothing
 */
void push(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	stack_t *temp;
	stack_t *new;

	temp = *head;
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(0);
	}

	if (temp != NULL)
		temp->prev = new;

	new->n = n;
	new->n = *head;
	new->prev = NULL;
	*head = new;
}
