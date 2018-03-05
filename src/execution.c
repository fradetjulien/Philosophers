/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** execution.c
*/

#include "philosopher.h"
#include <stdio.h>

bool			nb_meals(t_philosopher *ptr)
{
	if (ptr->nb_meals > 0)
		return (true);
	return (false);
}

int			philo_action(t_philosopher *ptr)
{
	if (ptr == NULL)
		return (-1);
	while (nb_meals(ptr) == true) {
		think(ptr);
		eat(ptr);
		rest(ptr);
	}
	return (0);

}

void			*loop_philo(void *arg)
{
	t_philosopher	*ptr = arg;

	philo_action(ptr);
	return (NULL);
}

int			execution(t_philosopher *ptr)
{
	int		i = 0;

	while (i < ptr->nb_ricebowl) {
		pthread_create(&ptr[i]._thread, NULL, loop_philo, &ptr[i]);
		pthread_mutex_init(&ptr->_mutex, NULL);
		i++;
	}
	i = 0;
	while (i < ptr->nb_ricebowl) {
		pthread_join(ptr[i]._thread, NULL);
		pthread_mutex_destroy(&ptr->_mutex);
		i++;
	}
	return (0);
}
