/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** init_philosophe.c
*/

#include <stdlib.h>
#include "philosopher.h"

t_philosopher	*init_philosophe(char **av, t_philosopher *ptr)
{
	int	i = 0, nb_meals = 0, nb_philosophes = 0;

	if (av[2] != NULL && av[4] != NULL) {
		nb_philosophes = atoi(av[2]);
		nb_meals = atoi(av[4]);
	}
	ptr->nb_philosophes = nb_philosophes;
	ptr->nb_meals = nb_meals;
	while (i < nb_philosophes) {
		ptr[i].nb_philosophes = nb_philosophes;
		ptr[i].nb_meals = nb_meals;
		ptr[i].nb_ricebowl = nb_meals;
		ptr[i].position = i;
		if (pthread_mutex_init(&ptr[i]._mutex, NULL) != 0) {
			return (NULL);
		}
		ptr[i].copy = ptr;
		i++;
	}
	return (ptr);
}
