#include "monty.h"
/**
 * f_pop - a function that removes the top of a stack
 * @head: head of the stack
 * @counter: line_number
 * Return: void
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *hnode;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hnode = *head;
	*head = hnode->next;
	free(hnode);
}
