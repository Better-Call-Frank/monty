#include "monty.h"
/**
 * f_pall - a function that will print all the elements in the stack
 * @head: first node in the stack
 * @counter: counter
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hnode;
	(void)counter;

	hnode = *head;
	if (hnode == NULL)
		return;
	while (hnode)
	{
		printf("%d\n", hnode->n);
		hnode = hnode->next;
	}
}
