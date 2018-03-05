/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** rest.c
*/

#include "philosopher.h"
#include "extern.h"

int		rest(t_philosopher *ptr)
{
	pthread_mutex_lock(&ptr->_mutex);
	lphilo_sleep();
	pthread_mutex_unlock(&ptr->_mutex);
	return (0);
}
