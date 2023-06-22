#include "monty.h"
/**
 * f_div - a function that divides the top two elements of the stack.
 * @head: the head of the stack
 * @counter: line_number
 * Return: void
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *hcopy;
	int len = 0, aux;

	hcopy = *head;
	while (hcopy)
	{
		hcopy = hcopy->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hcopy = *head;
	if (hcopy->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hcopy->next->n / hcopy->n;
	hcopy->next->n = aux;
	*head = hcopy->next;
	free(hcopy);
}
