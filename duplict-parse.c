#include "shell.h"

char **deepDupe(char **args)
{
	char **storage;
	int b, k, total;

	for (b = 0, total = 0; args[b] != NULL; b++)
	{
		k = _strlen(args[b]);
		total += k;
	}

	storage = _malloc(total * b);
	if (storage == NULL)
		return (NULL);

	for (b = 0; args[b] != NULL; b++)
	{
		k = _strlen(args[b]);
		storage[b] = _strcpy(args[b], k);
	}

	return (storage);
}
