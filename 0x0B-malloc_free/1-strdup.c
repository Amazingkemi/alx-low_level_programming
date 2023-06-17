#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string,
 * which duplicates the given string,
 * allocate memory with malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make a memory
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nstr = malloc(len * sizeof(*str));
	if (nstr == NULL)
		return (NULL);
	while (i <= len)
	{
		nstr[i] = str[i];
		i++;
	}
	return (nstr);
}
