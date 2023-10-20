#include "monty.h"
/**
 * pall - prints the whole stack
 * @head: head of the stack
 * @line_number: unused
 * Return: returns nothing
 */
void pall(stack_t **head, unsigned int line_number)
{
	(void)counter;
	stack_t *temp;

	temp = *head;

	if temp == NULL
		return;

	while (temp)
	{
		print("%d\n", temp->n);
		temp = temp->next;
	}
}
