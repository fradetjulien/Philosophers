/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** create_philo.c
*/

#include "philosopher.h"

t_philosopher		*create_philosophe(char **av)
{
	t_philosopher	*ptr;

	ptr = malloc(sizeof(t_philosopher) * atoi(av[2]));
	if (ptr == NULL)
		return (NULL);
	if ((ptr = init_philosophe(av, ptr)) == NULL) {
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
