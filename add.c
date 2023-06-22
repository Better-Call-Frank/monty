#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: the first element of stack
 * @counter: counts the number of lines
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hcopy;
	int len = 0, temp;

	hcopy = *head;
	while (hcopy)
	{
		hcopy = hcopy->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hcopy = *head;
	temp = hcopy->n + hcopy->next->n;
	hcopy->next->n = temp;
	*head = hcopy->next;
	free(hcopy);
}
