#include "monty.h"
/**
 * f_mul - a function that multiplies the top two elements of the stack.
 * @head: the head of a stack
 * @counter: line_number
 * Return: void
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *hnode;
	int i = 0, temp;

	hnode = *head;
	while (hnode)
	{
		hnode = hnode->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hnode = *head;
	temp = hnode->next->n * hnode->n;
	hnode->next->n = temp;
	*head = hnode->next;
	free(hnode);
}
