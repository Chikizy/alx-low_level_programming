#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head)
	{
		temp = *head;
		while ((current = temp) != NULL)
		{
			temp = temp->next;
			free(current);
		}
		*head = NULL;
	}
}
