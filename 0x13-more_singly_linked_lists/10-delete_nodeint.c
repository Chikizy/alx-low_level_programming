#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of a list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful or -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (!temp)
			return (-1);
		if (i == index - 1)
		{
			current = temp->next;
			temp->next = current->next;
			free(current);
		}
		temp = temp->next;
		i++;
	}
		return (1);
}
