#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - string len
 * @s: string
 *
 * Return: int len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 * @n: size to take from s2
 *
 * Return: poiter to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int s1Len, s2Len;
	unsigned int i, I;
	char nul = '\0';
	int tots;

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;

	s1Len = _strlen(s1);
	s2Len = _strlen(s2);

	if (n >= s2Len)
		tots = s2Len + s1Len;
	else
		tots = s1Len + n;

	a = malloc(tots + 1);
	if (a == NULL)
		return (NULL);

	i = 0, I = 0;
	while (s1[i] != '\0')
		a[I++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && n-- != 0)
		a[I++] = s2[i++];
	a[I] = '\0';

	return (a);
}
