#include "monty.h"

/**
 * f_sub - subtraction
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	int difference, nodes = 0;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	difference = current->next->n - current->n;
	current->next->n = difference;
	*head = current->next;
	free(current);
}
