#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;
	listint_t *temp = head;

	for (count = 0 ; count < index && temp != NULL ; count++)
		temp = temp->next;
	if (temp == NULL)/* checks if index exceeds count i.e exceeds end of list*/
		return (NULL);
	else
		return (temp);
}
