#include "monty.h"
/**
 * my_pstr - program prints at start of stack then new line
 * @head: head of stack
 * @counter: line_number
 * Return: void
 */
void my_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	(void)counter;

	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}

	printf("\n");
}
