#include "dog.h"
#include <stdio.h>

#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function
 * @name: name of dog
 * @age: age of new doggo
 * @owner: owner of new doggo
 *
 * Description: function to create a new dog. Store copy of name & owner
 * Return: ptr, null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, *neowner;
	int lename, leowner;

	dog_t *dogg = malloc(sizeof(dog_t));

	if (dogg == NULL)
		return (NULL);
	_strlen(name);
	lename = _strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if (nename == NULL)
	{
		free(dogg);
		return (NULL);
	}
	_strcpy(nename, name);

	_strlen(owner);
	leowner = _strlen(owner);
	neowner = malloc((leowner + 1) * sizeof(char));
	if (neowner == NULL)
	{
		free(nename);
		free(dogg);
		return (NULL);
	}
	_strcpy(neowner, owner);

	dogg->name = nename;
	dogg->age = age;
	dogg->owner = neowner;

	return (dogg);
}

/**
 * _strlen - function
 * @s: first operand & pointer
 *
 * Description: function that returns the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strcpy - function
 * @src: copy from
 * @dest: copy to
 *
 * Description: copies strng pnted by src to dest with null
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}

