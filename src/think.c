/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** think.c
*/

#include "philosopher.h"
#include "extern.h"

void		think(t_philosopher *ptr)
{
	pthread_mutex_lock(&ptr->_mutex);
	lphilo_take_chopstick(&ptr->_mutex);
	lphilo_think();
	lphilo_release_chopstick(&ptr->_mutex);
	pthread_mutex_unlock(&ptr->_mutex);
	usleep(rand() % 50 + 50);
}
