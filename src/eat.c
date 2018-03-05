/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** eat.c
*/

#include "philosopher.h"
#include "extern.h"

void		eat(t_philosopher *ptr)
{
	int	neighbour = 0;

	if (&ptr->copy[ptr->position + 1] == NULL)
		neighbour = 0;
	else
		neighbour = (ptr->position + 1) % ptr->nb_philosophes;
	pthread_mutex_lock(&ptr->copy[neighbour]._mutex);
	pthread_mutex_lock(&ptr->_mutex);
	lphilo_take_chopstick(&ptr->copy[neighbour]._mutex);
	lphilo_take_chopstick(&ptr->_mutex);
	lphilo_eat();
	ptr->nb_meals--;
	lphilo_release_chopstick(&ptr->copy[neighbour]._mutex);
	lphilo_release_chopstick(&ptr->_mutex);
	pthread_mutex_unlock(&ptr->copy[neighbour]._mutex);
	pthread_mutex_unlock(&ptr->_mutex);
	usleep(rand() % 50 + 50);
}
