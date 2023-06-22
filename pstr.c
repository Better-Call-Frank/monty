#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hnode;
	(void)counter;

	hnode = *head;
	while (hnode)
	{
		if (hnode->n > 127 || hnode->n <= 0)
		{
			break;
		}
		printf("%c", hnode->n);
		hnode = hnode->next;
	}
	printf("\n");
}
