/*
** tail.h for tail in /home/Spiki/Colles/CPE_2016_stumper1/include
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Thu Apr 20 13:49:11 2017 Filliat Etienne
** Last update Thu Apr 20 15:55:09 2017 Filliat Etienne
*/

#ifndef TAIL_H_
# define TAIL_H_

# include "struct.h"
# define ERR_OPEN1	"tail: cannot open '"
# define ERR_OPEN2	"'for reading: No such file or directory\n"

int		my_strlen(char *str);
void		my_putstr(int fd, char *str);
int		main(int ac, char **av);
int		my_strcmp(char *a, char *b);
int		open_it(char *pathname);
int		checkarg(int ac, char **av);
int		verif_flags(t_flags *flags, int i, int x, char **av);
int		is_num(char *str);
int		my_atoi(char *str);

#endif /* !TAIL_H_ */ 
