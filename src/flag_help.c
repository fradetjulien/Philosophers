/*
** EPITECH PROJECT, 2018
** philosopher
** File description:
** flag_help.c
*/

#include <stdio.h>

void		flag_help(char *binary)
{
	printf("USAGE\n\t%s -p nbr_p "
	       "-e nbr_e\n\n"
	       "DESCRIPTION\n\t-p nbr_p "
	       "number of philosophers\n\t"
	       "-e nbr_e maximum number times a"
	       " philosopher eats before exiting the"
	       " program\n"
	       , binary);
}
