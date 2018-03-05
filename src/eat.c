/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** eat.c
*/

#include "philosopher.h"
#include "extern.h"

int		eat(t_philosopher *ptr)
{
	pthread_mutex_lock(&ptr->_mutex);
	lphilo_take_chopstick(&ptr->_mutex);
	lphilo_eat();
	pthread_mutex_unlock(&ptr->_mutex);
	return (0);
}
