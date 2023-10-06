#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - function that splits a string into words.
 * @str: string.
 * Return: pointer to an array or NULL.
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j = 0, height = 0, width = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	}
	ptr = malloc(height * sizeof(char *) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
			width++;
		}
		if (width != 0)
		{
			ptr[j] = malloc(width * sizeof(char));
			j++;
			width = 0;
		}
		if (str[i] != '\0')
			i++;
	}
	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		while (str[j] != ' ' && str[j] != '\0')
		{
			ptr[i][width] = str[j];
			j++;
			width++;
		}
		if (width != 0)
		{
			i++;
			width = 0;
		}
		if (str[j] != '\0')
			j++;
	}
	ptr[height] = NULL;
	return (ptr);
}
