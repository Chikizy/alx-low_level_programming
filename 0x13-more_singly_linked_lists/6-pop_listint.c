#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *headnode;
	listint_t *newhead;
	int data;

	if (head != NULL)
	{
		headnode = *head;
		data = headnode->n;
		newhead = headnode->next;
		free(headnode);
		*head = newhead;
		return (data);
	}
	else
		return (0);
}
