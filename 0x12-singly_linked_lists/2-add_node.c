#include "lists.h"
/**
 *_str - returns the length of a string
 *@s: string
 *
 *Return: length of a string
 */

int _str(const char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}


/**
 **add_node - adds a new node at the beginning of a list_t list
 *
 *@str: string
 *@head: head 
 *
 *Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t new;
int length;
char *string;
new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);
if (str == NULL)
{
string = NULL;
length = 0;
}
else
{
string = strdup(str);
length = _str(str);
}
new->len = length;
new->str = string;
new->next = *head;
*head = new;
return (*head);
}
