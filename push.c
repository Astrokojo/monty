#include "monty.h"
/**
 * push - adds an element to the top of stack
 * @head: head of stack.
 * @value: int input
 *
 * Return: nothing
 */
void push(stack_t **head, int value)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: couldn't malloc\n");
		exit(EXIT_FAILURE);
	}

	if (*head != NULL)
		(*head)->prev = new;

	new->n = value;
	new->prev = NULL;
	*head = new;
}
