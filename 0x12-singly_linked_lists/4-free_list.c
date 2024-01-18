#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL) /**this line can be written while
							 * ((current = head) != NULL); this assigns
							 * head to current repeatedly and checks if it is
							 * NULL.if used, no need for lines 12 and 22.
							*/
	{
		head = head->next;/**head stores the address of the next node
							*/
		free(current->str);
		free(current);
		current = head;/*current takes the address of the next node to free
						 */
	}
}
