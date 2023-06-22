#include "monty.h"
/**
  *f_sub- a function that perform sustration between the top and the next node in a stack
  *@head: the head of a stack
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, i;

	temp = *head;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}
