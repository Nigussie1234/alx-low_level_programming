#include "lists.h"
/**
 *free_list - frees a list_t list
 *
 *Return: void
 */

void free_list(list_t *head)
{
list_t *cursor, *tmp;
if (head != NULL)
{
cursor = head->next;
head->next = NULL;
while (cursor != NULL)
{
tmp = cursor->next;
free(cursor);
cursor = tmp;
}
}
}
