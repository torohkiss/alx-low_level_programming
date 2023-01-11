#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wordnos - counts no of words in a given string
 * @str: pointer to the string
 *
 * Return: 0
 */

int wordnos(char *str)
{
	int wordno, i, j;

	wordno = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				j++;
			}
			wordno++;
			i = j - 1;
		}
		i++;
	}
	return (wordno);
}


/**
 * cpystr - copies words in string
 * @s: double pointer to a 2D array of strings
 * @str: pointer to string 
 */

void cpystr(char **s, char *str)
{
	int i, j, l, idx;

	i = 0;
	idx = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			l = 0;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				s[idx][l] = *(str + j);
				l++;
				j++;
			}
			s[idx][l] = '\0';
			idx++;
			i = j;
		}
		i++;
	}
}

/**
 * strtow - splits a string into words
 * @str: pointer to string
 *
 * Return: 0
 */

char **strtow(char *str)
{
	char **s;
	int wordno, i, j, k, length, idx;

	if (str == NULL || str[0] == '\0')
		return (0);
	wordno = wordnos(str);

	s = (char **)malloc(sizeof(char *) * (wordno + 1));
	if (s == 0 || wordno == 0)
		return (0);
	i = 0;
	idx = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			length = 0;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				length++;
				printf("Length is %d\n", length);
				j++;
			}
			*(s + idx) = (char *)malloc(sizeof(char) * (length + 1));
			if (*(s + idx) == 0)
			{
				for (k = 0; k < idx; k++)
					free(*(s + k));
				free(s);
				return (0);
			}
			idx++;
			i = j - 1;
			printf("value of i is %d \n", i);
		}
		i++;
	}
	cpystr(s, str);
	return (s);
}
