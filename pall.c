#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: unused
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;

	if (current == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

