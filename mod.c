#include "monty.h"
/**
 * f_mod - a function that computes division of the second
 * top element of the stack by the top element of the stack
 * @head: the head of the stack
 * @counter: line_number
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hnode = *head;
	if (hnode->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = hnode->next->n % hnode->n;
	hnode->next->n = temp;
	*head = hnode->next;
	free(hnode);
}
