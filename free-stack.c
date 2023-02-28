#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */

void free_stack(stack_t *head)
{
	stack_t *aux;
	aux = head;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

/**
* f_stack - function that prints the top
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
