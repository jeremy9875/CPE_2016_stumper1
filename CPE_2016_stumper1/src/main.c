/*
** main.c for main in /home/jeremy.elkaim/CPE_2016_stumper1/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Apr 20 14:40:23 2017 jeremy elkaim
** Last update Thu Apr 20 18:13:35 2017 jeremy elkaim
*/
#include <unistd.h>
#include "../include/tail.h"

int		main(int ac, char **av)
{
  void		*buf;

  if (ac == 1)
    {
      while (1)
	read(0, buf, 2048);
    }
  else if (ac > 1)
    return(checkarg(ac, av));
  else
    return (84);
  return (0);
}

void		init_flags(t_flags *flags)
{
  flags->c_flag = -1;
  flags->n_flag = -1;
  flags->read_size = -1;
  flags->q_flag = -1;
  flags->v_flag = -1;
}

int		checkarg(int ac, char **av)
{
  int		x;
  t_flags	flags;
 
  x = 1;
  init_flags(&flags);
  while (x < ac)
    {
      if (my_strcmp(av[x], "-c") == 0 || my_strcmp(av[x], "--bytes") == 0)
	x = verif_flags(&flags, 1, x, av);
      else if (my_strcmp(av[x], "-n") == 0 || my_strcmp(av[x], "--lines") == 0)
	x = verif_flags(&flags, 2, x, av);
      x++;
    }
  return (0);
}

int		verif_flags(t_flags *flags, int i, int x, char **av)
{
  if (i == 1)
    {
      if (flags->n_flag == -1 || flags->n_flag == 1)
	{
	  flags->n_flag = -1;
	  flags->c_flag = 1;
	  flags->read_size = my_atoi(av[x + 1]);
	  x++;
	}
    }
  else if (i == 2)
    {
      if (flags->c_flag == -1 || flags->c_flag == 1)
	{
	  flags->c_flag = -1;
	  flags->n_flag = 1;
	  flags->read_size = my_atoi(av[x + 1]);
	  x++;
	}
    }
  return (x);
}

int		my_strcmp(char *a, char *b)
{
  int		index;
  
  index = 0;
  while (a[index] != '\0' && b[index] != '\0')
    {
      if (a[index] - b[index] != 0)
	return (1);
      index++;
    }
  return (0);
}
