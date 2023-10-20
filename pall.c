#include "monty.h"
/**
 * pall - prints the whole stack
 * @head: head of the stack
 * Return: returns nothing
 */
void pall(stack_t **head)
{
	stack_t *temp;

	temp = *head;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
