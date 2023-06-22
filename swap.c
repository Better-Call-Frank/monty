#include "monty.h"
/**
 * f_swap - a function that swaps the top two elements of the stack.
 * @head: the head of the stack
 * @counter: line_number
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *hnode;
	int len = 0, temp;

	hnode = *head;
	while (hnode)
	{
		hnode = hnode->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hnode = *head;
	temp = hnode->n;
	hnode->n = hnode->next->n;
	hnode->next->n = temp;
}
