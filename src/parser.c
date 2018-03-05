/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** parser.c
*/

#include "philosopher.h"

int		syntaxe(int ac, char **av)
{
	if (ac != 5) {
		return (-1);
	}
	if (is_flag(av) != 0 ||
	    is_num(av[2]) != 0 ||
	    is_num(av[4]) != 0) {
		return (-1);
	}
	return (0);
}

int		parser(int ac, char **av)
{
	if (syntaxe(ac, av) == -1) {
		flag_help(av[0]);
		return (-1);
	}
	if (atoi(av[2]) == 0 ||
	    atoi(av[2]) == 1)
		return (2);
	return (0);
}
