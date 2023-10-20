#include "monty.h"
/**
 * pall - prints the whole stack
 * @head: head of the stack
 * Return: returns nothing
 */
void pall(stack_t **head)
{
	const stack_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
