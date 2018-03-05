/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** philosopher.h
*/

#ifndef PHILOSOPHER_H_
# define PHILOSOPHER_H_

#include <pthread.h>
#include <stdlib.h>

typedef struct			s_philosopher
{
	struct s_philosopher	*copy;
	pthread_mutex_t		_mutex;
	pthread_t		*_thread;
	int			nb_philosophes;
	int			nb_meals;
	int			nb_ricebowl;
	int			position;
}				t_philosopher;

int		parser(int ac, char **av);
int		is_flag(char **flag);
int		is_num(char *number);
int		execution(t_philosopher *ptr);
int		eat(t_philosopher *ptr);
int		think(t_philosopher *ptr);
int		rest(t_philosopher *ptr);
void		flag_help(char *binary);
t_philosopher	*create_philosophe(char **av);
t_philosopher	*init_philosophe(char **av, t_philosopher *ptr);

#endif /* !PHILOSOPHER */
