/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** execution.c
*/

#include "philosopher.h"

bool			nb_bowl()
{
	
}

int			philo_action(t_philosopher *ptr)
{
	if (ptr == NULL)
		return (-1);
	return (0);

}

void			*loop_philo(void *arg)
{
	t_philosopher	*ptr = arg;

	philo_action(&ptr->copy[ptr->position]);
	return (NULL);
}

int			execution(t_philosopher *ptr)
{
	int		i = 0;

	while (i < ptr->nb_meals) {
		pthread_create(ptr[i]._thread, NULL, loop_philo, &ptr[i]);
		pthread_mutex_init(&ptr->_mutex, NULL);
		i++;
	}
	i = 0;
	while (i < ptr->nb_meals) {
		pthread_join(*(ptr)[i]._thread, NULL);
		pthread_mutex_destroy(&ptr->_mutex);
		i++;
	}
	return (0);
}
