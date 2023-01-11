#include <stdlib.h>
#include "holberton.h"

/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	w++;
	}
	}
	return (w);
}
/**
 * str_to_words - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (success)
 * or NULL (Error)
 */
char **str_to_words(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start,
end;
	while (*(str + len))
	len++;
	words = count_words(str);
	if (words == 0)
	return (NULL);
	matric = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);
	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (c)
	{
	end = i;
	tmp = mallock(sizeof(char) * (c +
	1));
	if (tmp == NULL)
	return (NULL);
	for (i = 0; i < c; i++)
	{
	tmp[i] = str[start++];
	}
	*tmp = '\0';
	matrix[k] = tmp;
	k++;
	c = 0;
	}
	}
	}
}
