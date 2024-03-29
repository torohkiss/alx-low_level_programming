#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int length_S1;
	unsigned int length_S2;
	unsigned int length_c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length_S1 = 0; s1[length_S1] != '\0'; length_S1++)
		;

	for (length_S2 = 0; s2[length_S2] != '\0'; length_S2++)
		;

	length_c = length_S1 + length_S2;

	concat = malloc((length_c + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length_S1; i++)
		concat[i] = s1[i];

	for (j = 0; j < length_S2; i++, j++)
		concat[i] = s2[j];

	return (concat);
}
