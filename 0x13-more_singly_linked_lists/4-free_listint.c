#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		head = tmp;
		free(head);
		tmp = head->next;
	}

}
