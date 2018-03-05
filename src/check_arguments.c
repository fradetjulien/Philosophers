/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** check_arguments.c
*/

#include <string.h>

int		is_flag(char **flag)
{
	if (strcmp(flag[1], "-p") != 0 ||
	    strcmp(flag[3], "-e") != 0) {
		return (-1);
	}
	return (0);
}

int		is_num(char *number)
{
	int	i = 0;

	if (number == NULL)
		return (-1);
	while (number[i] != '\0') {
		if (number[i] < 48 ||
		    number[i] > 57)
			return (-1);
		i++;
	}
	return (0);
}
