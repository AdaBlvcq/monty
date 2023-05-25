#include "monty.h"
/**
 * print_pall - prints the stack
 * @head: stack head
 * @line_number: not used
 * Return: no return
*/
void print_pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}