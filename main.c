/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** main.c
*/

#include "extern.h"
#include "philosopher.h"

int			main(int ac, char **av)
{
	int		error = 0;
	t_philosopher	*ptr;

	if (RCFStartup(ac, av) == -1)
		return (84);
	if (parser(ac, av) == -1)
		return (-1);
	if ((ptr = create_philosophe(av)) == NULL)
		return (-1);
	error = execution(ptr);
	if (error != 0)
		return (84);
	RCFCleanup();
	return (0);
}
