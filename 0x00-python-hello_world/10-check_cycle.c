#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr;
	listint_t *ptrpre;

	ptr = list;
	ptrpre = list;
	while (list && ptr && ptr->next)
	{
		list = list->next;
		ptr = ptr->next->next;

		if (list == ptr)
		{
			list = ptrpre;
			ptrpre =  ptr;
			while (1)
			{
				ptr = ptrpre;
				while (ptr->next != list && ptr->next != ptrpre)
				{
					ptr = ptr->next;
				}
				if (ptr->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
