#include "monty.h"
/**
  *f_rotl- a funtion that rotates the stack to the top
  *@head: the top of the stack
  *@counter: line_number
  *Return: Nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *new;

	if (*head == NULL || (*head)->next == NULL)
		return;

	new = (*head)->next;
	new->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = new;
}
