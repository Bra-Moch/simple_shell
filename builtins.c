#include "shell.h"

/**
 * find_builtins - finds builtin from the list of builtins based on user input
 * @tokens: pointer to user input
 * Return: 0 if found a builtin or else -1
 */

int find_builtins(char **tokens)
{
	int i;
	in_built list[] = {{"alias", whichAlias},
			     {"cd", chng_dr},
			     {"env", printEnv},
			     {"exit", ext},
			     {"help", hlp},
			     {"history", printHistory},
			     {"printenv", printEnv},
			     {"setenv", _setenv},
			     {"unsetenv", _unsetenv},
			     {NULL, NULL}
	};

	for (i = 0; list[i].s != NULL; i++)
	{
		if (_strcmp(tokens[0], list[i].s) == 0)
		{
			list[i].func(tokens);
			return (0);
		}
	}
	return (-1);
}
